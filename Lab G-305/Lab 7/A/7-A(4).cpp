#include<stdio.h>
int main(){
	float a,b,c,max;
	printf("Enter Number A=");
	scanf("%f",&a);
	printf("Enter Number B=");
	scanf("%f",&b);
	printf("Enter Number C=");
	scanf("%f",&c);
	max=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("max=%f",max);
	return 0;
}
