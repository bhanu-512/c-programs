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
    for(i=pos-1;i<n-1;i++){
        a[i]=a[i+1];}
        n--;
/*here the n-- is to decrease one int from array so is 
outside of for loop*/
printf("the array is");
for(i=0;i<n;i++){
    printf("\t%d",a[i]);
}
return 0;
}