#include<stdio.h>
int main(){
    int a[10]={9,8,8,1,1,4,6,6},i,j,count=0,b[10],k=0;
    for(i=0;i<8;i++){
        count =1;
        for(j=i+1;j<8;j++){
            if(a[i]==a[j]){
                a[j]=-1;
             count++;
            }
        }b[k]=count;
        k++;
        }
        int y=0;
        for(i=0;i<8;i++){
        if(a[i]!=-1){
            printf("\nthe num %d is repeated %d",a[i],b[y]);
            y++;
        }}
        return 0;
}