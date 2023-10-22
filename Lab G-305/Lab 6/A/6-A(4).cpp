#include<stdio.h>
int main(){
	int num,a;
	printf("Enter An Integer Number=");
	scanf("%d",&num);
	num=num%10;
	if(a=num%2==0){
		printf("Enter Number's Last digit is even");
	}
	else{
		printf("Enter Number's Last digit is odd");
		
	}
	return 0;
	
}
