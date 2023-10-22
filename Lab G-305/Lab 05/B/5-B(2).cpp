#include<stdio.h>
int main(){
	int a;
	printf("Enter number A=");
	scanf("%d",&a);
	if(a==(a>>1)<<1){
	printf("Number Is Even");
	}
	else{
	printf("Number Is Odd");
	}
	return 0;
}
