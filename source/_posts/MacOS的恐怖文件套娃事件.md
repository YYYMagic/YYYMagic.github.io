---
title: MacOS的恐怖文件套娃事件
date: 2020-03-04 09:33:36
tags:
---

刚拿到一台mac十分激动，办了一件蠢事。。。

文件结构是这样的，templates是空文件夹  
![](https://s2.ax1x.com/2020/03/04/350s4P.png)

当我执行如下命令  
`cp * ./templates`  
出现了templates的无限嵌套，移到回收站以后如下图  
![](https://s2.ax1x.com/2020/03/04/350DAI.png)

尝试清空回收站却提示templates被占用，官网给出的解决方案均无法解决。。.  
<div align=center><img src =  "https://s2.ax1x.com/2020/03/04/35xx6x.jpg"></div>

后来参考网上一位大佬的方法解决了问题 
```zsh
cd ~/.Trash
rm -rf *
```

其中
> -f：强制删除文件或目录  
-r或-R：递归处理，将指定目录下的所有文件与子目录一并处理  

终于还是用到了这句`rm -rf *` 看来危险的文件嵌套要用危险的方法来解决。。微盟删库跑路的哥们也是这么干的？  

<div align=center><img src = "https://s2.ax1x.com/2020/03/04/35xzX6.jpg"></div>


PS:  
最近发现了这个娱乐项目，可以愉快地添加表情包了~   
<a href="https://github.com/zhaoolee/ChineseBQB"><img src="https://s2.ax1x.com/2020/03/04/35zICd.png" class="nofancybox" /></a>
