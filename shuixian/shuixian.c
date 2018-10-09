/*************************************************************************
	> File Name: shuixian.c
	> Author: foreverlong
	> Mail: admin@foreverlong.cn
	> Created Time: 2018年10月01日 星期一 10时18分43秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int a,b,c;
    int i,j;
    for(a=1;a<=9;a++)
    {
        for(b=0;b<=9;b++)
        {
            for(c=0;c<=9;c++)
            {
                i=a*100+b*10+c;
                j=a*a*a+b*b*b+c*c*c;
                if(i==j)
                {
                    printf("%d\n",i);
                }
            }
        }
    }
}
