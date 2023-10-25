#include<stdio.h>
int swap(int a,int b);
int main(){
	int a,b;
    printf("Enter 1st Number=");
	scanf("%d",&a);
	printf("Enter 2nd Number=");
	scanf("%d",&b);
	swap(a,b);
	return 0;

}
int swap(int a,int b){
	int c;
	c=a;
	a=b;
	b=c;
	printf("%d %d",a,b);
}



