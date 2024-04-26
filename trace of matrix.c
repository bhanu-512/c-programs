# include<stdio.h>
int main(){
     int a[10][10],i,j,m,n,sum=0;
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
  if(a[i]==a[j]){
   sum=sum+a[i][j];
  }
   
}
    }
    printf("the sum is %d",sum);
    return 0;
    }

