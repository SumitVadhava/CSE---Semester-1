#include<stdio.h>
int  main(){
	int i,j,n;
	for(i=1;i<=5;i++){
		for(j=1;j<=6-i;j++){
			
			printf(" ");
		}
		n=1;
		for(j=1;j<=i;j++){
			
			printf("%d ",n);
			n++;
		}
		printf("\n");
	}
	return 0;
}

