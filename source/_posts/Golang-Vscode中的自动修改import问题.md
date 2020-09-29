---
title: 'Golang: Vscode中的自动修改import问题'
date: 2020-03-03 22:19:02
tags:
---

一开始使用vscode编写go程序发现vscode会自动删除我的import

后来发现是format tool的问题

![](https://s2.ax1x.com/2020/03/03/34Hfd1.png)

设置方法如下：

format tool改成gofmt就不会出现自动修改import的情况了

或者format tool使用默认的goreturns，同时打开特定语言选项的go settings 添加
`"editor.formatOnSave": false`

这两种方法都可以取消vscode对golang中import的自动修改

像我这样的初学者还是不要选择自动修改import比较好...