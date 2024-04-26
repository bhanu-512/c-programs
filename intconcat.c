#include<stdio.h>
int main(){
    int a[100],b[100],c[100],i=0,j=0,count=0,n;
    printf("enter n");
    scanf("%d",&n);
     printf("enter string1");
     for(i=0;i<n;i++){
        scanf("%d",&a[i]);
     }
    printf("enter string2");
     for(i=0;i<n;i++){
        scanf("%d",&b[i]);
     }
    while(a[i]!='\0'){
        c[count]=a[i];
        i++;
        count++;
    }
    c[count++]=' ';
     while(a[j]!='\0'){
        c[count]=a[j];
        j++;
        count++;
    }
    c[count]='\0';
    for(i=0;i<2*n;i++){
    printf("the concat one is %d",c[i]);
    }
    return 0;
}