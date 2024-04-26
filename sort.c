# include<stdio.h>
int main(){
    int a[100],i,j,temp,n;
     printf("Enter no of elements?");
     scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter nums");
      scanf("%d",&a[i]);
    }

     for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
     }
     for(j=0;j<n;j++){
        printf("%d",a[j]);
     }
     return 0;
}