#include<stdio.h>
int add(int,int);
int main(){
	int a,b;
	printf("Enter 1st Number=");
	scanf("%d",&a);
	printf("Enter 2nd Number=");
	scanf("%d",&b);
	int Ans=add(a,b);
	printf("Ans=%d",Ans);
	return 0;
}
int add(int a,int b){
	int c=a+b;
	return c;
}
