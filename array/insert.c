/*************************************************************************
	> File Name: insert.c
	> Author:foreverlong
	> Mail:admin@foreverlong.cn
	> Site:wwww.foreverlong.cn
	> Created Time: 2018年10月28日 星期日 08时34分13秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int a[9],i,j;
    int insert;
    for(i=0;i<=8;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&insert);
    for(i=0;a[i]<=insert;i++)
    {
        printf("%d ",a[i]);
    }
    printf("%d ",insert);
    for(;i<=8;i++)
    {
        printf("%d ",a[i] );
    }
    return 0;
}
