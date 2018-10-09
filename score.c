/*************************************************************************
	> File Name: score.c
	> Author: foreverlong
	> Mail: admin@foreverlong.cn
	> Created Time: 2018年09月27日 星期四 09时32分46秒
 ************************************************************************/

#include <stdio.h>
int main()
{
    int i,a,b,c,d,e,n,s;
    a=b=c=d=e=0;
    printf("输入n:");
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        printf("输入成绩%d:",i+1);
        scanf("%d",&s);
        switch(s/10)
        {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:e++;break;
            case 6:d++;break;
            case 7:c++;break;
            case 8:b++;break;
            case 9:
            case 10:a++;break;
        }
    }
    printf("A:%d\n",a);
    printf("B:%d\n",b);
    printf("C:%d\n",c);
    printf("D:%d\n",d);
    printf("E:%d\n",e);
    return 0;
} 
