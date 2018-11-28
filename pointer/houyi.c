/*************************************************************************
	> File Name: houyi.c
	> Author:foreverlong
	> Mail:admin@foreverlong.cn
	> Site:wwww.foreverlong.cn
	> Created Time: 2018年11月13日 星期二 11时10分14秒
 ************************************************************************/
#include<stdlib.h>
#include<stdio.h>
void move(int a[],int m,int n);
int main()
{
    int *a;
    int n,i,m;
    scanf("%d",&n);
    a=(int *)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    move(a,m,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void move(int a[],int m,int n)
{
    int j;
    int *b;
    b=(int *)calloc(n,sizeof(int));
    for (j=m;j<n;j++)
    {
        b[j]=a[j-m];
    }
    for(j=0;j<m;j++)
    {
        b[j]=a[j+n-m];
    }
    for(j=0;j<n;j++)
    {
        *(a+j)=b[j];
    }
}
