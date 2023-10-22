#include<stdio.h>
int main(){
	int r,c;
     printf("Enter Row Of Matrix=");
	scanf("%d",&r);
	printf("Enter Column Of Matrix=");
	scanf("%d",&c);
	int A[r][c],B[r][c],C[r][c];
	int i,j;
    for(i=0;i<r;i++){
    	for(j=0;j<r;j++){
    		printf("Enter First Matrix [%d][%d] Element=",i,j);
    		scanf("%d",&A[i][j]);
		}
	}
	 for(i=0;i<r;i++){
    	for(j=0;j<r;j++){
    		printf("Enter Second  Matrix [%d][%d] Element=",i,j);
    		scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<r;i++){
    	for(j=0;j<r;j++){
    		C[i][j]=A[i][j]+B[i][j];
    	}
}
	for(i=0;i<r;i++){
    	for(j=0;j<r;j++){
    		printf("%d\t",C[i][j]);
    	}
    	printf("\n");
    }
    return 0;
	
	
}
