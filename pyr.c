# include<stdio.h>
int main()
{
FILE *fp;
fp=fopen("abc.txt","w");
// fgetc() example
char ch;
ch=fgetc(fp);
printf("%c",ch);
    return 0;
}