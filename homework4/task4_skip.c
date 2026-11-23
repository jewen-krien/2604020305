#include <stdio.h>
int main(void)
{
    int x;
    int skip_cnt = 0;    // 跳过的 3 的倍数数量
    int valid_cnt = 0;  // 有效数字个数
    int sum = 0;        // 有效数字总和
    printf("请输入一串整数（以 0 结束）：");
    while (1)
    {
        scanf_s("%d", &x);
        // 读到 0，break 退出循环
        if (x == 0)
        {
            break;
        }
        // 是 3 的倍数，continue 跳过
        if (x % 3 == 0)
        {
            skip_cnt++;
            continue;
        }
      // 有效数字
        valid_cnt++;
        sum += x;
    }
 printf("跳过了 %d 个 3 的倍数\n", skip_cnt);
    printf("有效数字 %d 个，总和 = %d\n", valid_cnt, sum);
    return 0;
}