#include<stdio.h>
int main(){
    char a[100],b[10],c[10];
    int i=0,j=0,count=0;
    printf("enter a");
    gets(a);
    printf("enter b");
    gets(b);
    while(a[i]!='\0'){
        c[count]=a[i];
        count++;
        i++;
    }
    c[count++]=' ';

    while(b[j]!='\0'){
         c[count]=b[j];
        count++;
        j++;
    }
    c[count]='\0';
printf("the new string is ");
puts(c);
return 0;
}
