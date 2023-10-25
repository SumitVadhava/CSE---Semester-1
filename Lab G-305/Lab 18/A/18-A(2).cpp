#include<stdio.h>
int max(int,int);
int min(int,int);
int main(){
	int a,b;
    printf("Enter 1st Number=");
	scanf("%d",&a);
	printf("Enter 2nd Number=");
	scanf("%d",&b);
	int Max=max(a,b);
	int Min=min(a,b);
	printf("max=%d\nmin=%d",Max,Min);
	return 0;
}
int max(int a,int b){
	int c=a;
	if(a<b){
		c=b;
	}
	return c;
}
int min(int a,int b){
	int d=a;
	if(a>b){
		d=b;
	}
	return d;
}
