#include<stdio.h>
int main(){
    int i,n,a[100],c;
     printf("Enter n");
     scanf("%d",&n);
     for(i=0;i<n;i++){
        printf("enter nums");
        scanf("%d",&a[i]);
     }
     printf("enter search number");
     scanf("%d",&c);
    for(i=0;i<n;i++){
       if(c==a[i]){
        printf("%d is at location of %dfrom right side",c,i+1);
        break;
       }
       else{
        printf("%d is not present in nums",c);
       }
    }
   
    return 0;
}sb
