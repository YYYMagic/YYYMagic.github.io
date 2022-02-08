---
title: Reference of Go Modules
date: 2022-02-06 09:31:09
tags:
---
# Reference of Go Modules
Go Modules Reference https://go.dev/ref/mod  
Go Modules Tutorial https://go.dev/blog/using-go-modules    
Dependency Problem by Russ cox https://research.swtch.com/deps
# note
go.mod中的go行指明了期望版本，编译器在遇到大于期望版本的新特性时会报错，比如要求

`go 1.15`

那么编译的代码中有Go1.16新特性`//go:embed`时会提示错误

尽量使得go.mod要求版本和实际编译版本一致