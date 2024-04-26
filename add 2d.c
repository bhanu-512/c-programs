# include<stdio.h>
int main(){
   int a[10][10],b[10][10],c[10][10],m,n,p,q,i,j;
   printf("enter dimen of a");
   scanf("%d%d",&m,&n);
   printf("enter dimen of b");
   scanf("%d%d",&p,&q);
   for(i=0;i<=m;i++){
    printf("\n");
    for(j=0;j<=n;j++){
    printf("enter a[]:");
    scanf("%d",&a[i][j]);
   }}
for(i=0;i<=p;i++){
     printf("\n");
    for(j=0;j<=q;j++){
    printf("enter b[%d]=",i);
    scanf("%d",&b[i][j]);
   }}
   for(i=0;i<=m;i++){
    for(j=0;j<=n;j++){
        c[i][j]=0;
        c[i][j]=a[i][j]+b[i][j];
    }
    
   }
   for(i=0;i<=m;i++){
    printf("\n");
    for(j=0;j<=n;j++){
        printf("\t%d",c[i][j]);
    }}

    
    return 0;

}