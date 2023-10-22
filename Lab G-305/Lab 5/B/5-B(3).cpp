#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter Number A=");
	scanf("%d",&a);
	b=a<<1;
	c=a>>1;
	printf("Multiplication by 2 is = %d\n",b);
	printf("Division by 2 is = %d",c);
	return 0;
}
