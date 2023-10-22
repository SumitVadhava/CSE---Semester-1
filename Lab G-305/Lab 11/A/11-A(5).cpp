#include<stdio.h>
int main(){
	int n,i,ans=1;
	printf("Enter Number=");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		ans=ans*i;
	}
	printf("Ans of Factorial is = %d",ans);
	return 0;
	
	
}
