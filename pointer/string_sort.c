/*************************************************************************
	> File Name: string_sort.c
	> Author:foreverlong
	> Mail:admin@foreverlong.cn
	> Site:wwww.foreverlong.cn
	> Created Time: 2018年11月13日 星期二 10时40分18秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
void swap(char *a,char *b);
int main()
{
    char a[100],b[100],c[100];
    scanf("%s%s%s",a,b,c);
    if(strcmp(a,b)>0) swap(a,b);
    if(strcmp(a,c)>0) swap(a,c);
    if(strcmp(b,c)>0) swap(b,c);
    printf("%s\n%s\n%s\n",a,b,c);
}

void swap(char a[],char b[])
{
    char t[100];
    strcpy(t,a);
    strcpy(a,b);
    strcpy(b,t);
}
