#include <stdio.h>
int main(void)
{
    // i：行（1～9），j：列（1～i）
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
    {
            printf("%d*%d=%2d", j, i, i * j);
            if (j != i)
    {
                printf("  "); // 式子之间两个空格
        }
        }
        printf("\n");
    }
    return 0;
}