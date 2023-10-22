#include<stdio.h>
int main(){
	int r,c;
	printf("Enter Row of Matrix=");
	scanf("%d",&r);
	printf("ENTER Column of Matrix=");
	scanf("%d",&c);
	int a[r][c],b[r][c];
	int i,j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter Element a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix= ");
		for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",a[i][j]);
		
		}
		printf("\n\t");
	}
	return 0;
	
	
}
