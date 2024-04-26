#include<stdio.h>
int main(){
    int a[10][10],b[10][10],c[10][10],i,j,k,n,m,p,q;
     printf("Enter a rows and col");
     scanf("%d %d",&m,&n);
     printf("Enter b rows and col");
     scanf("%d %d",&p,&q);
     if(p!=n){
        printf("matrix cant be *");
     }
    else{
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        printf("enter a nums");
        scanf("%d",&a[i][j]);
        }
    }
      for(i=0;i<p;i++){
        for(j=0;j<q;j++){
        printf("enter b nums");
        scanf("%d",&b[p][q]);
        }
    }
    for(i=0;i<m;i++){
       for(j=0;j<q;j++){
        for(k=0;k<n;k++){
            c[i][j]=0;
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
       }
    }
    for(i=0;i<m;i++){
           for(j=0;j<q;j++){
            printf("%5d",c[i][j]);
            printf("\n");
           }
    }
    }
    return 0;
}
