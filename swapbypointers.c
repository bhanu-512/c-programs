#include<stdio.h>
void swap(int*a,int*b,int*c);
int main(){
    int a=2,b=3,c=4;
    swap(&a,&b,&c);
    printf("values after swapping =%d %d %d",a,b,c);

  return 0;
}
void swap(int*a,int*b,int*c){
   int temp;
    temp=*a;
    *a=*b;
    *b=*c;
    *c=temp;

}
