#include<stdio.h>
int main(){
    int n,key,found=0,mid,a[100];
     printf("Enter n");
     scanf("%d",&n);
     printf("Enter key");
     scanf("%d",&key);
     printf("enter nums");
     for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
     }
     int low=0,high=n-1;
      mid=(low+high)/2;

     while(low<=high && !found){
        if(a[mid]==key){
            found=1;
        }
        else if(key<mid){
            high=mid-1;
            mid=(low+high)/2;
        }
       else{
        low=mid+1;
        mid=(low+high)/2;
       }
     }
     if(found==1){
        printf("the key is present at position%d",mid+1);
     }
     else{
        printf("it is not found");
     }
     return 0;
}