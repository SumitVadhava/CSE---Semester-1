#include<stdio.h>
int main(){
	int i,j,n;
	for(i=1;i<=5;i++){
		n=5;
		for(j=1;j<=i;j++){
			printf("%d",n);
			n--;
		}
		printf("\n");
	}
	return 0;
}
