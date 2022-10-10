#define n 3
#include<stdio.h>
struct employee
{
    int empno;
    char empname[100];
    char address[100];
    int age;
}e;


void main(){
   
        printf("\nEnter emp no:");
        
        scanf("%d",&e.empno);
        printf("\nEnter emp name:");
        scanf("%s",&e.empname);
        printf("\nEnter address:");
        scanf("%s",&e.address);
        printf("\nEnter age:");
        scanf("%d",&e.age);
    

    
       printf("\nemp no:%d",e.empno);
       printf("\nEmp name:%s",e.empname);
       printf("\nAddress:%s",e.address);
       printf("\n Age:%d",e.age);

 printf("\nemp no:%d",&e.empno);
       printf("\nEmp name:%d",&e.empname);
       printf("\nAddress:%d",&e.address);
       printf("\n Age:%d",&e.age);

    
    
}