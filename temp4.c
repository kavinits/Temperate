#include<stdio.h>
main()
{
	int n,sum=0,firstdigit,lastdigit;
	printf("Enter the value of n=");
	scanf("%d",&n);
	lastdigit=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	firstdigit=n;
    sum=firstdigit+lastdigit;
    printf("Sum of first and last digit=%d",sum);
}
