#include<stdio.h>
int main(){

   int a,b,*ptr1,*ptr2,*ptr3;
    printf("Enter 1st Number=");
    scanf("%d",&a);
    printf("Enter 2nd Number=");
    scanf("%d",&b);
    ptr1=&a;
    ptr2=&b;
    ptr3=ptr1;
    ptr1=ptr2;
    ptr2=ptr3;
   
    printf("1st Number=%d\n2nd Number=%d\n",*ptr1,*ptr2);
    return 0;
    
}
