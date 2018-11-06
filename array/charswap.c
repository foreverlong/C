/*************************************************************************
	> File Name: charswap.c
	> Author:foreverlong
	> Mail:admin@foreverlong.cn
	> Site:wwww.foreverlong.cn
	> Created Time: 2018年10月31日 星期三 15时46分36秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    char a[100];
    int i=0,j=0;
    while((a[i]=getchar())!='\n')
    {
        i++;
    }
    a[i]='\0';
    for(j=0;j<i;j++)
    {
        printf("%c",'A'+'Z'-a[j]);
    }
}
