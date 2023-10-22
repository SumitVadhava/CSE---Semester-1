#include<stdio.h>
int main(){
	int n;
	printf("Enter Number=");
	scanf("%d",&n);
    int i,s;
	s=n%10;
	printf("%d",s);
	
	while(n>=10){
		n=n/10;
	}
	printf("%d",n);
	
		
	
	return 0;	
}

