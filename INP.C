#include<stdio.h>
int main()
{
    int n,j,i=0,b[100];
    printf("Enter the hexa decimal number");
    scanf("%x",&n);
   int a=n;
   while(a!=0)
   {
   b[i]=a%2;
    a=a/2;
    i++;
   }
   for(j=i-1;j>=0;j--)5
   
   {
    printf("%d",b[j]);
   }
}