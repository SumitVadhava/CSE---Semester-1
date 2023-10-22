#include<stdio.h>
int main(){
	float a,b,c;
	printf("Enter number a =");
	scanf("%f",&a);
	printf("Enter number b =");
	scanf("%f",&b);
	printf("Enter number c =");
	scanf("%f",&c);
	if(a>b){
	
		if(a>c){
			printf("a is largest number");
		}
		else{
			printf("c is largest number");
		}
	}
	else{
		if(b>c){
			printf("b is largest number");
		}

		else{
			printf("c is largest number");
		}
	}
		return 0;
	}
	
	
