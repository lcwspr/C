# 函数的调用
* 当调用函数时，需要关心5要素
    * 头文件，包含指定的头文件
    * 函数名字，函数名字必须和头文件声明的名字一样
    * 功能，需要知道该函数能够做什么
    * 参数，参数类型要匹配
    * 返回值，根据需要接受返回值

* 几个常用函数
    1. `time_t time(time_t * t);`
        * 头文件：`#include <time.h>`
        * 功能：获取当前系统时间
        * 参数，常设置为NULL
        * 返回值，当前系统时间，time_t相当于long类型，单位为毫秒
    
    2. `void srand(unsigned int seed);`
        * 头文件: `#include <stdlib.h>`
        * 功能： 用来设置rand()产生随机数时的随机数种子
        * 参数，如果每次seed相等，rand()产生随机数相等
        * 返回值： 无
    
    3. `int rand(void);`
        * 头文件 `#include <stdlib.h>`
        * 功能： 返回一个伪随机数
        * 参数：无
        * 返回值：随机数

## 随机数获取演示
```
#include<stdlib.h>
#include<time.h>

int main()
{
    srand((unsigned int)time(NULL));
    int r = rand() % 10;
}
```