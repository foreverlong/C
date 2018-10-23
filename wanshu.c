/*************************************************************************
    > File Name: wanshu.c
    > Author: foreverlong
    > Mail: admin@foreverlong.cn
    > Created Time: 2018年10月01日 星期一 09时38分57秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int a,x,j,i;
    int yinshu[50],k,l;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        x=0;
        k=0;
        for(j=1;j<=i-1;j++)
        {
            if (i%j==0)
            {
                yinshu[k++]=j;
                x=x+j;
            }
        }
        if(x==i)
        {
            printf("%d its factors are",i);
            for(l=0;l<=k-2;l++)
            {
                printf("%d ",yinshu[l+1]);
            }
            printf("\n");
        }

    }
}
