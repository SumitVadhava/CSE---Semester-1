#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter  Number A=");
	scanf("%d",&a);
	printf("Enter  Number B=");
	scanf("%d",&b);
	printf("Enter  Number C=");
	scanf("%d",&c);
	if(a>b&&a>c){
		if(b>c){
			printf("Second Largest Number is=%d",b);
		}
		else{
			printf("Second Largest Number is=%d",c);
	}
}
else if(b>a&&b>c){
    if(a>c){
    	printf("Second latgest number is=%d",a);
    }
    else{
    	printf("Second largest number is=%d",c);
	}
	
}
else if(c>a&&c>b){
	if(a>b){
		printf("Second largest number is=%d",a);
	}
	else{
		printf("Second Largest Number is=%d",b);
	}
	
}
return 0;
}
	
	

