---
title: Go 1.17 的一些小变化
date: 2022-02-06 22:58:57
tags:
---
## go get
Go1.17中， `go get`不加`-d`选项是不推荐的，`-d`的意思是只修改 go.mod 的内容而不会将包下载下来，这样可以避免下载耗时太长，也可以减少无用的包下载；Go1.18中，`-d`选项是默认的，也就是`go get`将无法用于下载包的编译文件  
https://go.dev/doc/go-get-install-deprecation
> Starting in Go 1.17, installing executables with go get is deprecated. go install may be used instead.  
> In Go 1.18, go get will no longer build packages; it will only be used to add, update, or remove dependencies in go.mod. Specifically, go get will always act as if the -d flag were enabled.

以前用`go get xxx`现在变成`go install xxx@version`

## Lazy module loading
Go1.17的Go Command使用Module的懒加载模式[Lazy module loading
](https://go.dev/ref/mod#lazy-loading)来下载module。也就是如果go.mod的requires包涵盖了所有import packages，就不会加载module graph，否则再按需加载

## go build标签
Go1.17及之后用来指定编译平台的标签是`//go:build`，新标签的语法与Go的逻辑语法相同，比如限定在linux或者OS X编译： `//go:build linux || darwin`  
而在Go1.16及之前采用的标签是 `// +build`, 旧标签的语法为
- 空格表示OR
- 逗号表示AND
- !表示NOT

比如限定只能在linux或者OS X编译： `// +build linux darwin`  
gofmt命令可以在遇到旧标签的时候添加一个等价的新标签