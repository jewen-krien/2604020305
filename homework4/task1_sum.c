#include <stdio.h>
int main(void)
{
    int n;
    int sum = 0;
    printf("请输入整数个数：");
    scanf("%d", &n);
        if (n <= 0)
    {
        printf("输入错误：n 必须是正整数。\n");
        return 0;
    }
     printf("请输入 %d 个整数：", n);
       for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        sum += x;
    }
    double avg = (double)sum / n;
    printf("总和 = %d\n", sum);
    printf("平均值 = %.2f\n", avg);
    return 0;
}