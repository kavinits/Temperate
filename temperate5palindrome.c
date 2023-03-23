#include<stdio.h>
main()
{
	int a,s,temp,p=0;
	printf("Enter the value of a=");
    scanf("%d",&a);
    temp=a;
    while(a!=10)
    {
    	s=a%10;
    	p=p*10+s;
    	a=a/10;
    }
	printf("reverse=%d\n",p);
	if(temp==p)
	{
		printf("Number is palindrome");
    }
	else
	{
         printf("Not palindrome");
    }
} 

	
    

