#include<stdio.h>
main()
{
   int a=1,f=1,n;
   printf("Enter the value if n=");
   scanf("%d",&n);
   while (a<=n)
 
    {
      f=n*f;
	  n--;
    }
	printf("factorial=%d",f);	
}
