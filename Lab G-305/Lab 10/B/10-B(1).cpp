#include<stdio.h>
int main(){
	int n,i=1,sum=0;
	printf("Enter Number=");
	scanf("%d",&n);
	while(i<n){
		if(n%i==0){
			sum=sum+i;
		}
		i++;
	}
	if(n==sum){
		printf("Input number is perfect Number");
	}
	else{
		printf("Input number is not perfect Number");
		
	}
	return 0;
}
