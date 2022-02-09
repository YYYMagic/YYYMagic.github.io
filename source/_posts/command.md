---
title:  一些常用的go command
date: 2022-02-08 22:54:37
tags:
---
more: https://pkg.go.dev/cmd
### go build

特别地，文件最上方加入 build tags 可以指定编译的平台

`//go:build`  ≥ Go1.17 

`// +build`  ≤ Go1.16 时使用

`//go:build ignore` 表示编译时需要忽略

也可以采用文件名为 `*_GOOS_GOARCH` 的形式(source_windows_amd64.go)来限定文件制定的编译平台

### go list

`go list -m all` 列出所有依赖

`go list -m -u all` 列出所有依赖以及其当前最新版本

`go list -m -versions xx` 列出xx包的所有版本

### go get

`go get -d xx` 更新xx的版本

`go get -d -u ./...` 更新所有直接/简介依赖的modules的版本

`go get -d xx@vx.x.x` 更新某个包到指定版本

ps: Go1.18 默认隐式携带`-d`, 不会下载包，只会更新go.mod文件

### go install

`go install xx@version`  下载某个program的指定版本

### go mod

`go mod tidy` 删除go.mod中的无用包

### go vet

`go vet` 找到文档中的错误之处，不一定十分准确

### go fix

`go tool fix -diff file` 找到旧API并给出建议  
如果没有 `-diff` 则直接替换文件，或路径下的所有文件