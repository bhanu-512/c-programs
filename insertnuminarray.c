#include<stdio.h>
int main(){
    int a[100],i,n,ins,pos;
     printf("Enter n");
     scanf("%d",&n);
     printf("Enter num to be inserted");
     scanf("%d",&ins);
     printf("Enter at which position num is inserted");
     scanf("%d",&pos);
     printf("enter nums");
     for(i=0;i<n;i++){
        scanf("%d",&a[i]);
     }
      for(i=n-1;i>=pos-1;i--){
       a[i+1]=a[i];
       
      }
       a[pos-1]=ins;
     printf("nums after ins");

       for(i=0;i<=n;i++){
        printf("\n%d",a[i]);
     }

    return 0;
}
