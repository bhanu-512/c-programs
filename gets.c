# include<stdio.h>
  int leb(char arr[]);
   int main(){
    char arr[100];
    fgets(arr,100,stdin);
    printf("the length of string is %d",leb(arr));
   
    return 0;
   }

   int leb(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
     count++;

    }
    return count-1;
   }