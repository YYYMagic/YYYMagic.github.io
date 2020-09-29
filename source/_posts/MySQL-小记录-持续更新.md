---
title: MySQL 记录(持续更新)
date: 2020-03-03 22:31:19
tags:
---

1. TRUNCATE 和 DELETE

    TRUNCATE删除表中所有数据而保留表的属性 `TRUNCATE TABLE [表名]`

    DELETE可以指定删除的条件 `DELETE FROM [表名] WHERE ...`

    当清空表格时选择TRUNCATE，当删除部分数据时选择DELETE

2. 自增
    自增属性为AUTO_INCREMENT，一个表格只能有一个自增列

    自增初始值必须设置，使用`ALTER TABLE [表名] AUTO_INCREMENT=1` 设置表格的自增初始值为1

    在插入数据时不用管自增的一列，其数据会自动增长

3. DATETIME数据类型

    设置DATETIME的默认值为 `CURRENT_TIMESTAM` 则插入数据时不用管该列，该列会自动写入插入数据的时刻

4. unsigned int

    数据类型 `unsigned int` 应该写为 `INT UNSIGNED`

5. ALTER

    修改字段名称  
    `ALTER [表名] CHANGE [字段名] [新字段名 + 属性]`
    