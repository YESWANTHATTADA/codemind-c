#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i,m;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    m=0;
    for(i=0;i<n;i++)
    {
        m=m+a[i];
        
    }
    
    float y;
    y=float (m)/n;
    printf("%.2f",y);
}