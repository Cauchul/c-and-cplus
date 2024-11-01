#include <stdio.h> // 引入标准输入输出头文件
#include "add.h"
#include "str.h"
#include "test.h"

int main() { // 主函数
    const int a = 100;
    int res = add(a , 20);
    printf("输出的结果为：%d\n", res);
    str_list();

    test();
    s_in();

    return 0;
}

