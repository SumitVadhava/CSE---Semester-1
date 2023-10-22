#include<stdio.h>
int main(){
	int n,s,m,sum=0;
	printf("Enter Number=");
	scanf("%d",&n);
	while(n!=0){
		s=n%10;
		n=n/10;
		sum=sum*10+s;
	}
	while(sum!=0){
		m=sum%10;
		sum=sum/10;
       printf("Digit of number is=%d\n",m);
	}
	return 0;
}
