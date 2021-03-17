/*
题目：输入99口诀

程序分析：可先用'*'号在纸上写出字母C，再分行输出。
*/

#include <stdio.h>
int main()
{
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d * %d = %d\t", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}
