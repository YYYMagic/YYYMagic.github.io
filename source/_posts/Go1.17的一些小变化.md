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