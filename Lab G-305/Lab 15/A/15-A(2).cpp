#include<stdio.h>
int main(){
	int a[1000],n;
	printf("Enter Number of elements=");
	scanf("%d",&n);
	int i,NC=0;
	for(i=0;i<n;i++){
		printf("Enter Elements=");
		scanf("%d",&a[i]);
		if(a[i]<0){
			NC++;
		}
	}
	printf("Total Negitive Number in Array is=%d",NC);
	return 0;
}
