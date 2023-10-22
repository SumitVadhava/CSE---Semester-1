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
	printf("%d",sum);
    return 0;
}
	
