# include<stdio.h>

void swap(int arr[],int n);
void parr(int arr[],int n);
  int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n;
    swap(arr,7);
    parr(arr,7);
 

return 0;

}
void parr(int arr[],int n){
for(int i=0;i<n;i++){
   printf("%d\t",arr[i]);
   }
}


void swap(int arr[],int n){
  for(int i=0;i<n/2;i++){
    int no1=arr[i];
    int no2=arr[n-i-1];
  
    arr[i]=no2;
    arr[n-i-1]=no1;
   
  }
}
