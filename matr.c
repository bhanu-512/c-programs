#include<stdio.h>
int main()
{
    int n,m;
    printf("enter n of rows?");
    scanf("%d",&n);
     printf("enter m of rows?");
    scanf("%d",&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        printf("\t%d",(i,j));
            
        }printf("\n");

    }return 0;
}