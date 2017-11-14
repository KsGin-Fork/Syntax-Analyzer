# LL(1)语法分析器

1. 设计要求
    
    &emsp;&emsp;对于任意输入的一个LL(1)文法，构造其预测分析表，并对指定输入串分析其是否为该文法的句子。
    
2. 设计思路
    
    1. 实现 Follow 集 和 First 集构造算法 , 并打印
    2. 构造预测分析表 ，并打印
    3. 模拟栈分析过程
    
3. 文件配置
    
    1. `/test.cpp`  测试文件
    
    2. `/type.h`    结构体定义 ， 宏定义文件
    
    3. `/util.h`    方法定义
    
    4. `/util.cpp`  方法实现
     
    