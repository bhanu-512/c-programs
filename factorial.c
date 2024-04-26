
#include<stdio.h>
int fact(int n);
int main(){
int x,q;
printf("enter x");
scanf("%d",&x);
q=fact(x);
printf("the factorial is %d",q);
return 0;
}
int fact(int n){
    int sum;
    if(n==1){
        return 1;
    }
    else{
        sum=fact(n-1)*n;
    }

}
