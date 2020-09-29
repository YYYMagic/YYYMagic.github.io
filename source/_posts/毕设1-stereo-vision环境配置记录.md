---
title: 毕设1-stereo-vision环境配置记录
date: 2019-12-19 15:09:04
tags:
---
# 环境配置记录
我之前的ubuntu的qt环境已经乱了，因此重装了ubuntu。

Ubuntu16.04 LTS 系统是内置 Qt4 和 Qt5 的库的，但是不知道为什么没有qmake。


配置步骤如下：

1. 安装QT5.8。因为项目说明中写道需要QT creator 4.1，而QT5.8对应的Tool刚好是Qt creator 4.1，注意安装的时候将Qt5.8库勾选上。
![](https://s2.ax1x.com/2019/12/20/QOtW60.png)

2. 安装Opencv3.1.0。这里我是采用源码安装的，下载opencv3.1.0的源代码后按照网上的教程cmake make等等，这里有一个因为墙的问题无法下载的问题，博客里会有写道，注意一下就好。

3. 安装opengl。按照网上教程安装即可，2、3条命令就可以搞定。我是按照[这个教程](https://blog.csdn.net/zzyczzyc/article/details/84193696
)装的。

4. 接下来运行qmake，编译就可以了。

5. 运行的时候需要KITTI的数据，这个只能在需要翻墙而且只能在Windows下下载而不能再ubuntu下下载，很奇怪。下载后按照项目说明提取到相应文件夹，这里注意不能直接提取，要把文件直接放在文件夹下，不能文件夹里面再有文件夹嵌套。文件夹结构见下图。
![](https://s2.ax1x.com/2019/12/20/QOtfXV.png)

6. 运行，点scan选择包含那三个文件夹得文件夹即可。

运行效果
![](https://s2.ax1x.com/2019/12/20/QOt4mT.png)

这里只是运行KITTI的库，接下来我会试一下将它改成双目相机实时的程序。