# include<stdio.h>
int main(){
     int a[10][10],i,j,m,n,b[10][10];
printf("Enter the size of matrix A\n");
  scanf("%d %d",&m,&n);

printf("Enter elements of matrix A\n");
for(i=0;i<m;i++){
for(j=0;j<n;j++){
scanf("%d",&a[i][j]);
    ;}}

for(i=0;i<m;i++){
    printf("\n");
for(j=0;j<n;j++){
    b[j][i]=a[i][j];
   
}
    }
    printf("the trans is ");
for(i=0;i<n;i++){
    printf("\n");
for(j=0;j<m;j++){
    printf("\t%d",b[i][j]);
}}
return 0;
}
