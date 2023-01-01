#include<stdio.h>
int main()
{
    int n,a,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a<=30)
        {
        printf("NO
");
        }
        else
        {
        printf("YES
");
        }
    }
}