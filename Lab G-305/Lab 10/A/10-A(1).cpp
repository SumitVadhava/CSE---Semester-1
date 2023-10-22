#include<stdio.h>
int main(){
	int n,s;
	printf("Enter Number=");
	scanf("%d",&n);
	s=n%10;
	while(n>=10){
	n=n/10;
}
printf("Sum=%d",n+s);
return 0;
}
	
