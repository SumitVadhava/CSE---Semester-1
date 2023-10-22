#include<stdio.h>
int main(){
	int a[1000],n,target;
	printf("Enter Number Of Elements=");
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		printf("Enter Elements Of Arry=");
		scanf("%d",&a[i]);
	}
	printf("Enter Element Which you Search in Array=");
	scanf("%d",&target);
	for(i=0;a[i]!='\0';i++){
		if(a[i]==target){
			printf("Enter Element is available in Array");
		}
	}
	printf("Enter Element is not available in Arry");
	return 0;
}
