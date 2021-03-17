/*
题目：判断101到200之间的素数。

程序分析：判断素数的方法：用一个数分别去除2到sqrt(这个数)，如果能被整除， 则表明此数不是素数，反之是素数。 
*/

#include <stdio.h>

int main()
{
    int F1, F2,count = 0;
    int a = 1;

    printf("请输入你要判断的区间：");
    scanf("%d %d",&F1,&F2);

    for (F1; F1 < F2; F1++)
    {
        for (int i = 2; i < F1; i++)
        {
            if (F1 % i == 0){
                a = 0;
            } 
        }
        if (a == 1)
        {
            printf("%d  ", F1);
            count += 1;
            if (count % 4 == 0)
            {
                printf("\n");
            }
        }else{
            a = 1;
        }
    }

    return 0;
}
