//print multiplication Table of given number
#include<stdio.h>
int main(){
	int n,i=1;
	printf("Enter Number=");
	scanf("%d",&n);
	while(i<=10){
		printf("%d X %d=%d\n",n,i,n*i);
        i++;
	}
	return 0;
}
