#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i,m=0,k=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            m=m+a[i];
        }
        else
        {
            k=k+a[i];
        }
    }
    int h=m-k;
    if(h>0)
    {
        printf("%d",h);
    }
    else
    {
        printf("%d",-1*h);
    }
}