#include<stdio.h>
int main(){
	int n,s,sum=0,t;
	printf("Enter Number=");
	scanf("%d",&n);
	t=n;
	while(n!=0){
		s=n%10;
		n=n/10;
		sum=sum*10+s;
	}
	if(t==sum){
		printf("Enter Number is Palindrome");
	}
	else{
	   printf("Enter Number is not Palindrome");
	}
	return 0;
}
