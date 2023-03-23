#include<stdio.h>    
int main()    
{    
 int n1=0,n2=1,n3,a,num;    
 printf("Enter the number=");    
 scanf("%d",&num);    
 printf("%d %d\n",n1,n2);   
 for(a=2;a<num;++a)    
 {    
  n3=n1+n2;    
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;    
 }  
    
 }    
