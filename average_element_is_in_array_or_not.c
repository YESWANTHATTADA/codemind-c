#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i,m;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    int f=0;
    for(i=0;i<n;i++)
    {
        f=f+a[i];
        
    }
    int g;
    float y;
  y=f/n;
  for(i=0;i<n;i++)
  {
      if(y==a[i])
      {
          g=1;
      }
  }
    if(g==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}