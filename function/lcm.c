/*************************************************************************
        > File Name: lcm.c
        > Author: foreverlong
        > Mail: admin@foreverlong.cn
        > Created Time: 2018年10月10日 星期三 20时30分24秒
 ************************************************************************/

#include<stdio.h>
void gys(int a,int b)
{
    int i;
    for(i=b;i>0;i--)
    {
        if(a%i==0&&b%i==0)
        {
            printf("gys is %d\n",i);
            break;
        }
    }
}
void gbs(int a,int b)
{
    int i;
    for(i=b;i<=a*b;i++)
    {
        if(i%a==0&&i%b==0)
        {
            printf("gbs is %d",i);
            break;
        }
    }
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    gys(a,b);
    gbs(a,b);
}

