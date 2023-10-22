#include<stdio.h>
int main(){
	int a[5],b[5];
	int i,count=0;
	for(i=1;i<=5;i++){
		printf("\nEnter %d Person Height and Weight=",i);
		scanf("%d %d",&a[i],&b[i]);
		if(a[i]>170 && b[i]<50){
			count++;
		}
	}
	printf("number of person having height greater than 170 and weight less than 50=%d",count);
	return 0;
}

