#include<stdio.h>
int main(){
int n,a[20],*ptr,i,j,k,*temp,b[20];
printf("enter n");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("enter a[%d]",i);
    scanf("%d",&a[i]);
}
    ptr=a;
    temp=b;
for(i=0;i<n-1;i++){
    for(j=0;j<n-1-i;j++){
        if(*(ptr+j)>*(ptr+j+1))
         *temp=*(ptr+j);
         *(ptr+j)=*(ptr+j+1);
         *(ptr+j+1)=*temp;
    }

}
printf("the sorted array is");
for(k=0;k<n;k++){
    printf("%d",*(ptr+k));
}

return 0;
}
