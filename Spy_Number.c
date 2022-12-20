#include<stdio.h>
const char*spy(int num)
{
    int r,s=0,p=1;
    while(num!=0)
    {
        r=num%10;
        s=s+r;
        p=p*r;
        num=num/10;
    }
    if(s==p)
    return("Spy Number");
    else
    return("Not Spy Number");
}
int main()
{
    int num;
    scanf("%d",&num);
    printf("%s",spy(num));
}