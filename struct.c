#include <stdio.h>
struct employee{
    int age,sal,id;
    char name[100];
};
void main(){
    struct employee e[100];
    int n,i;
    printf("enter num of employees");
    scanf("%d",&n);
    for(i=0;i<n;i++){
            printf("enter detalis of employe %d :",i+1);
            printf("enter eid");
            scanf("%d",&e[i].id);
            printf("enter sal");
            scanf("%d",&e[i].sal);
            printf("enter name");
            scanf("%s",&e[i].name);
            printf("enter age");
            scanf("%d",&e[i].id);
    }
    printf("\nenter id\tentername\tenterage\tentersal");
    for(i=0;i<n;i++){
     printf("\n%d\t%d\t%d\t%s",e[i].id,e[i].age,e[i].sal,e[i].name);

    }

}