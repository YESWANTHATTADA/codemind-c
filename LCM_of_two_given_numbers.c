#include<stdio.h>
int main()
{
    int a,b,m;
    scanf("%d%d",&a,&b);
    m=(a>b)?a:b;
    for(m;m>0;m++)
    {
        if(m%a==0 && m%b==0)
        {
            printf("%d",m);
            break;
        }
    }
}