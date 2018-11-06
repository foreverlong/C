/*************************************************************************
	> File Name: zuiduo.c
	> Author:foreverlong
	> Mail:admin@foreverlong.cn
	> Site:wwww.foreverlong.cn
	> Created Time: 2018年11月02日 星期五 16时15分22秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    char a[100];
    int c=0,i,n,k=0,d;
    static int b[10];
    scanf("%d",&n);
    for(i=1;i<=n+1;i++)
    {
        k=0;
        while((a[k]=getchar())!='\n')
        {
            b[a[k]-'0']++;
            k++;
        }
       //printf("%d",b[3]);
        a[k]='\0';
    }
    for(i=0;i<=9;i++)
    {
        if(b[i]>c)
        {
            c=b[i];
        }
    }
    for(i=0;i<=9;i++)
    {
        if(b[i]==c)
        printf("数字%d出现了%d次\n",i,c);
    }
}
