#include<stdio.h>
int main(){
	int num1,num2;
	printf("Enter String of Numbers=");
	scanf("%d",&num1);
	printf("TO\n");
	printf("Enter String of Numbers=");
	scanf("%d",&num2);
	while(num1<=num2){
		if(num1%2==0){
		printf("%d\n",num1);
	}
	    num1++;
	}

	return 0;
}
