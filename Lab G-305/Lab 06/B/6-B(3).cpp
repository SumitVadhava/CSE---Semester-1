#include<stdio.h>
int main(){
	float a,b,c;
	printf("Enter angle a=");
	scanf("%f",&a);
	printf("Enter angle b=");
	scanf("%f",&b);
	printf("Enter angle c=");
	scanf("%f",&c);
	if(a==b&&b==c){
		printf("Tringle is EQUILATERAL");
	}
	else if(a==b||b==c||c==a){
		printf("Tringle is ISOCELES");
		
	}
	else{
		printf("Tringle is SCALENE");
	}
	return 0;
	}
