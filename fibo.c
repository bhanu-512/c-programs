# include<stdio.h>
   int fib(int n);
   int main(){
   int x=5,q;
   printf("enter x");
   scanf("%d",&x);
   for(int i=0;i<=x;i++){
      printf("\t%d",fib(i));
   }
   printf("sum is %d",q);
return 0;
   }
      int fib(int n){
         if(n==1){
            return 1;
         }
         else if(n==0){
            return 0;
         }
         else{
           return fib(n-1)+fib(n-2);
         }

      }