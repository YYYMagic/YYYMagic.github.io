---
title: linux的软连接与硬链接
date: 2020-04-15 00:37:33
tags:
---

# 软链接
创建命令： `ln -s 原文件 软连接`
更新命令： `ln -snf 原文件 软连接`

1. 原文件可以是d(文件夹)  
2. 软连接相当于一个文件，就是数据块(block)比较特殊，存放着原文件的路径。  
3. 软连接有着新的inode号以及用户数据块
4. 原文件删除则软链接的文件内容也被清除

ps: 在一个文件系统中，inode是文件索引的唯一标识

# 硬链接
创建命令： `ln 原文件 硬链接`

1. 原文件不可以是d，因为. 和 ..也是硬链接，创建文件硬链接会造成循环嵌套
2. 硬链接与原文件具有相同的inode号
3. 源文件删除不会影响硬链接内容


![](https://s1.ax1x.com/2020/04/15/JpHEoF.jpg)


# find查询
```cmd
在/home下查询data.txt的软链接
find /home -lname data.txt

在/home下查询data.txt的所有硬链接
find /home -samefile data.txt

在/home下查询data.txt的所有硬链接
find /home -inum <inode号>
```