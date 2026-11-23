#include <stdio.h>
int main(void)
{
    int a, b;
    printf("请输入两个正整数：");
    scanf_s("%d%d", &a, &b);
    if (a <= 0 || b <= 0)
    {
        printf("输入错误：两个数都必须是正整数。\n");
        return 0;
    }
    int oa = a, ob = b;
    while (b != 0)
    {
        int t = a % b;
        a = b;
        b = t;
    }
    printf("%d 和 %d 的最大公约数是 %d。\n", oa, ob, a);
    return 0;
}