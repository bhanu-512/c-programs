# include<stdio.h>
# include<string.h>
 int num(int arr[10],int n);
int main(){
    int i,j,temp[100];
    int arr[10]={1,2,2,3,3,3,6,7,8,9};
    int n= sizeof arr[10]/sizeof arr[0];
    num(arr,n);
 for(int i=0;i<j;i++){
             printf("%d",temp[i]);
          }     
  return 0;
}
int num(int arr[10],int n){
    int temp[100];
    int j=0,i;
        for(int i=0;i<n;i++){
           if(arr[i]!=arr[i+1])
              temp[j++]=arr[i];
        }
        return j;
        }   