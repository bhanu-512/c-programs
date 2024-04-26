#include <stdio.h>
int main(){
   int a[10]={13,33,56},b[10]={1,2,3,4,5},c[40]={0},*ptr1,*ptr2,*ptr3,i=0,j=0,count=0;
   ptr1=a;
   ptr2=b;
   ptr3=c;
   while(*(ptr1+i)!='\0'){
      *(ptr3+count)=*(ptr1+i);
       i++;
       count++;
   }
   while(*(ptr2+j)!='\0'){
       *(ptr3+count)=*(ptr2+j);
       j++;
       count++;
   }
printf("the con ptr is");
 for(int k=0;k<count;k++){
    printf("%d",*(ptr3+k));
 }
 return 0;
}