#include<stdio.h>
int main(){
	float n,sum=0,count=0;
	float avg;
	printf("Enter Number(enter 0 to end the program)=");
	scanf("%f",&n);
	sum=sum+n;
	while(n!=0){
		printf("Enter Number(enter 0 to end the program)=");
		scanf("%f",&n);
	    sum=sum+n;
		count++;
	}
	printf("Sum=%f\n",sum);
	avg=sum/count;
	printf("Avg=%f",avg);
}
