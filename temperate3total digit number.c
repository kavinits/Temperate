#include<stdio.h>
main()
{
	int n,count=0;
	printf("Enter a number=");
    scanf("%d",&n);
    while (n)
 
    {
    	n=n/10;
        count++;
	}	
    printf("total number of digits=%d",count);
	  
}    

