# include<stdio.h>
   
 int count(int arr[],int n);

   int main(){
    int arr[]={1,2,3,46,76,75,58,623};
    int n;
    printf("%d",count(arr,8));
    return 0;
   }



int count(int arr[],int n){
    int no=0;
    for(int i=0;i<n;i++){
    
      if(arr[i]%2==0){
        no+=1;
      }
    } 
     return no;
}