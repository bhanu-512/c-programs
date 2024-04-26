// C Program to Insert an element
// at a specific position in an Array

#include <stdio.h>
void rev(int n,int*ptr);
int main(){
   int a[10]={1,2,3,4,5};
   rev(5,a);

	return 0;
}
void rev(int n,int*ptr){
	printf("the rev is");
	for(int i=n-1;i>=0;i--){
		printf("\n%d",ptr+i);
	}

}
