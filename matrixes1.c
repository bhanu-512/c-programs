#include<stdio.h>
int main()
{
int A[10][10],B[10][10],C[10][10],i,j,k,m,n,p,q;
printf("Enter the size of matrix A\n”);
  scanf(“%d %d",&m,&n);
printf("Enter the size of matrix B\n”);
 scanf("%d%d",&p,&q); // read size of matrix b
 if(n!=p){
printf("Matrix multiplication is not possible\n”);
}
else
{
printf("Enter elements of matrix A\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf(“%d”,&A[i][j]); //read matrix A
printf("Enter elements of matrix B\n");
for(i=0;i<p;i++)
for(j=0;j<q;j++)
scanf("%d",&B[i][j]); //read matrix B
for(i=0;i<m;i++)
for(j=0;j<q;j++)
{
C[i][j]=0;
for(k=0;k<n;k++)
 C[i][j] = C[i][j] + A[i][k] * B[k][j] ; // multiply a and b matrix
}
