#include<stdio.h>
int main(){
    int n,i,x[10],first=0,sec=0;
    printf("enter n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("x[%d]=",i);
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++){
        if(first<x[i]){
            sec=first;
            first=x[i];
        }
        if(sec<x[i]&&x[i]<first){
            sec=x[i];
        }
    }
    printf("1st is %d",first);
    printf("\n");
    printf("2nd is %d",sec);
    return 0;
}