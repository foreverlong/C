/*************************************************************************
	> File Name: nixu.c
	> Author:foreverlong
	> Mail:admin@foreverlong.cn
	> Site:wwww.foreverlong.cn
	> Created Time: 2018年10月28日 星期日 08时51分34秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int a[10],i;
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=9;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}
