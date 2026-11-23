#include <stdio.h>
int main(void)
{
    int n;
    int is_prime = 1;
   printf("请输入一个整数：");
    scanf_s("%d", &n);
    if (n < 2)
    {
        printf("%d 不是素数。\n", n);
        return 0;
    }
    // for 从 2 试到 n-1，找到因子就 break
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            is_prime = 0;
            break;
        }
    }
   if (is_prime)
    {
        printf("%d 是素数。\n", n);
    }
    else
    {
        printf("%d 不是素数。\n", n);
    }
   return 0;
}