/*
题目：输入三个整数x,y,z，请把这三个数由小到大输出。

程序分析：
*/
#include <stdio.h>

int main()
{
    int x, y, z, n;
    printf("请输入三个数字：\n");
    scanf("%d,%d,%d", &x, &y, &z);
/*
    if (x > y)
    {
        if (y > z)
        {
            printf("从小到大的顺序为：%d,%d,%d\n", z, y, x);
        }
        else
        {
            if (x > z)
            {
                printf("从小到大的顺序为：%d,%d,%d\n", y, z, x);
            }
            else
            {
                printf("从小到大的顺序为：%d,%d,%d\n", y, x, z);
            }
        }
    }
    else
    {
        if (x > z)
        {
            printf("从小到大的顺序为：%d,%d,%d\n", z, x, y);
        }
        else
        {
            if (y > z)
            {
                printf("从小到大的顺序为：%d,%d,%d\n", x, z, y);
            }
            else
            {
                printf("从小到大的顺序为：%d,%d,%d\n", x, y, z);
            }
        }
    }
    */
   if(x < y){
       n = x;
       x = y;
       y = n;
   }
   if(x < z){
       n = x;
       x = z;
       z = n;
   }
   if(y < z){
       n = y;
       y = z;
       z = n;
   }
printf("从小到大的顺序为：%d,%d,%d",z,y,x);



    return 0;
}