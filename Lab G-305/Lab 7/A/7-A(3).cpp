#include<stdio.h>
int main(){
	int a,b,sign;
	printf("Enter Sign(1-4)\v description: 1=addtion, 2=substrection, 3= multiplication, 4= division: Enter Sign=");
	scanf("%d",&sign);
	printf("Enter Number A=");
	scanf("%d",&a);
	printf("Enter Number B=");
	scanf("%d",&b);
	switch(sign){
		case 1:
			printf("Ans=%d",a+b);
			break;
			case 2:
			printf("Ans=%d",a-b);
			break;
			case 3:
			printf("Ans=%d",a*b);
			break;
			case 4:
			printf("Ans=%d",a/b);
			break;
	}
	return 0;
}
