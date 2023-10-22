#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("Enter Three Number=");
	scanf("%d %d %d",&a,&b,&c);
	(a>b)?(printf(" a is largest number\nAns=%d",a*c)):printf("b is largset Number\nAns=%d",b*c);
	return 0;
}
