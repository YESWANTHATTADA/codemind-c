#include<stdio.h>
int main()	
{
	int n,sr,r,s=0,b,c=0;
	scanf("%d",&n);
	sr=n*n;
	while (n!=0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	b=s*s;
	while(b!=0)
	{
	    r=b%10;
		c=c*10+r;
		b=b/10;	
	}
	if(sr==c)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}
