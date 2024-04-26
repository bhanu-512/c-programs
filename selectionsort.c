#include<stdio.h>
int main(){
    int n,a[100],temp,i,j;
     printf("Enter n");
     scanf("%d",&n);
     printf("enter nums");
     for(i=0;i<n;i++){
        scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
     }
     printf("the nums after sorting are");
     for(i=0;i<n;i++){
        printf("\n%d",a[i]);
     }
     return 0;
}
