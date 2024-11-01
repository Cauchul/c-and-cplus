# include<stdio.h>

int test() {
    printf("in test function\n");
    printf("The character is: %c\n", 65);
    printf("int: %d\n", 65);

    return 0; 
}
 
 int s_in() {
    int a, b;
    printf("请输入a 和 b的值:");
    scanf("%d %d", &a, &b);
    printf("a = %d, b = %d\n", a, b);
 }