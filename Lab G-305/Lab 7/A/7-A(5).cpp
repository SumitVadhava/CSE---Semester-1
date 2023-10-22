#include<stdio.h>
int main(){
	float a,b,max;
	printf("Enter Number A=");
	scanf("%f",&a);
	printf("Enter Number B=");
	scanf("%f",&b);
	max=(a>b)?a:b;
	printf("max=%f",max);
	return 0;
	
}

