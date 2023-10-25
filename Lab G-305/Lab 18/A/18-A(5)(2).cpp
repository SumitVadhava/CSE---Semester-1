#include<stdio.h>
void  swap(int *a,int *b){
	int c=*a;
	*a=*b;
	*b=c;
}
int main(){
	int x,y;
	printf("Enter 1st Number=");
	scanf("%d",&x);
	printf("Enter 2nd Number=");
	scanf("%d",&y);
	swap(&x,&y);
	printf("%d %d",x,y);
	return 0;
}
