#include<stdio.h>
int main(){
    int n,temp,rev=0,digit;
    printf("enter the num");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    if(temp==rev){
        printf("it is a palin");
    }
    else{
        printf("it is not palin");
    }
  return 0;
}
