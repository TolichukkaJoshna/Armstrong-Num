#include<stdio.h>
main()
{
	int r,i=1,s=0,n,t;
	printf("enter a number..:");
	scanf("%d",&n);
	t=n;
	while(i<=n)
	{
		r=n%10;
		s=s+r*r*r;
		n=n/10;
	}
	if(t==s)
	{
		printf("\nArmstrong Number");
	}
	else
	{
		printf("\nNot A Armstrong Number");
	}
}
