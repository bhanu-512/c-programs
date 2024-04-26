# include<stdio.h>
int main(){
    int n,a[10],pos,i;
    printf("enter n");
    scanf("%d",&n);
    printf("enter pos");
    scanf("%d",&pos);
    for(i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=n;i<=pos;i--){
        a[i+1]=a[i];}
        a[pos-1]=pos;
        n--;
/*here the n-- is to decrease one int from array so is 
outside of for loop*/
printf("the array is");
for(i=0;i<n;i++){
    printf("\t%d",a[i]);
}
return 0;
}