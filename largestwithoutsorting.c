#include <stdio.h>

int main() {
    int n,a[100],i,j,temp=0,b[100];
     printf("Enter n");
     scanf("%d",&n);
     printf("enter nums");
     for(i=0;i<n;i++){
        scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++){
        if(a[i]>temp){
           
            temp=a[i];
        }
     }
        printf("the largest num is %d",temp);
       
         
      

     return 0;
}

   