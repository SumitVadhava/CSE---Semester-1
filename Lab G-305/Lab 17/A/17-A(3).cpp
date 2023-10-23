#include<stdio.h>
int main(){
	int x,y,*ptr1,*ptr2;
	printf("Enter 1st Number=");
	scanf("%d",&x);
	printf("Enter 2nd Number=");
	scanf("%d",&y);
	ptr1=&x;
	ptr2=&y;
	printf("Sum=%d",*ptr1+*ptr2);
	return 0;
}
