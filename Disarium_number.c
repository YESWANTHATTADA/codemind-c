#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    scanf("%d",&a);
    int t=a,y=a,c=0;
    while(t!=0)
    {
        c++;
        t=t/10;
    }
    int r,s=0;
    while(a!=0)
    {
        r=a%10;
        s=s+pow(r,c);
        c--;
        a=a/10;
    }
    if(s==y)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}