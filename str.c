#include <stdio.h>
#include <string.h>
// #include "str.h"

int str_list(){

    char str[] = "hello world";
    char str1[] = {'a', 'b', 'c'};

    printf("str1 leng: %d\n", sizeof(str1));

    int length = sizeof(str1) / sizeof(str1[0]);
    for (int i = 0; i < length; i++) {
        printf("%c\n", str1[i]);
    }
    return 0;
}