/*************************************************************************
	> File Name: copy.c
	> Author:foreverlong
	> Mail:admin@foreverlong.cn
	> Site:wwww.foreverlong.cn
	> Created Time: 2018年11月16日 星期五 16时01分09秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stddef.h>
void strmcpy(char *s,char *t,int m);
int main()
{
    int m;
    char s[100],t[100];
    printf("先输入字符串后数\n");
    scanf("%s",s);
    scanf("%d",&m);
    strmcpy(s,t,m);
    printf("%s",t);
}
void strmcpy(char *s,char *t,int m)
{
    int i,j;
    j=strlen(s);
    for(i=m-1;i<=j-1;i++)
    {
        *(t+i-m+1)=s[i];
    }
    *(t+i-m+1+1)='\0';
}
