#include<stdio.h>
int main(){
	int a[20][2],b[20][2];
	int i,j,n=0;
	for(i=0;i<20;i++){
		for(j=0;j<1;j++){
			printf("Enter Roll Number Of %d Student=",i);
			scanf("%d",&a[i][j]);
			printf("Enter Mark Of %d Student=",i);
		    scanf("%d",&b[i][j]);
			
		}
	}
	for(i=0;i<20;i++){
		for(j=0;j<1;j++){
			printf("%d\t",a[i][j]);
			printf("%d",a[i][j]);
			
			
		}
		printf("\n");
	}
	return 0;
	
}
