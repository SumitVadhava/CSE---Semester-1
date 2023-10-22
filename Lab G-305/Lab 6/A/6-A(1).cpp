#include<stdio.h>
int main(){
	double a,b;
	char sign;
	printf("Enter Number sign=");
	scanf("%c",&sign);
	printf("Enter Number A=");
	scanf("%lf",&a);
    printf("Enter Number B=");
	scanf("%lf",&b);
	if(sign=='+'){
		printf("Ans=%lf",a+b);
	}
	else if(sign=='-'){
		printf("Ans=%lf",a-b);
	}
		else if(sign=='*'){
			printf("Ans==%lf",a*b);
		}
			else if(sign=='/'){
				if(b==0){
				printf("Ans=indefiend");
				}
				else if(sign=='/'){
					printf("Ans=%lf",a/b);
		}
			
		}
			
		else{
			printf("Error:This sign is not allowed ");
		}
		
	
	return 0;
}
