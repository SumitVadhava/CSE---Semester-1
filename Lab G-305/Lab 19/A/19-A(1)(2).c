#include<stdio.h>
int fac(int n);
void main(){
	int n;
	printf("Enter Number which number's Factorial you find=");
	scanf("%d",&n);
	int Ans=fac(n);
	printf("Ans=%d",Ans);
}
int fac(int n){
	if(n==0||n==1){
		return 1;
		
		
	}
	else{
	
	return n*fac(n-1);
	}
}
