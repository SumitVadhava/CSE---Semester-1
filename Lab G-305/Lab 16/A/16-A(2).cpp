#include<stdio.h>
int main(){
	int a[3][3];
	int i,j,PC=0,NC=0,ZC=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter Element a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
			if(a[i][j]>0){
				PC++;
			}
			else if(a[i][j]<0){
				NC++;
			}
			else{
				ZC++;
			}
		}
	}
	printf("Positive Count=%d\nNegitive Count=%d\nZero Count=%d",PC,NC,ZC);
	return 0;
}
