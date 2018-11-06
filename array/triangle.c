/*************************************************************************
	> File Name: triangle.c
	> Author:foreverlong
	> Mail:admin@foreverlong.cn
	> Site:wwww.foreverlong.cn
	> Created Time: 2018年10月31日 星期三 15时33分15秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int a,i,j,n,flag=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a);
            if(i>j&&a!=0)
            {
                flag=0;
            }
        }
    }
    if(flag==0) printf("NO");
    else printf("YES");
}
