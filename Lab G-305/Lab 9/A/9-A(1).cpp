//print sum of series 1-2+3-4+5-6+7...n.
#include<stdio.h>
int main(){
	int i=0,num,sum=0;
	printf("Enter Number= ");
	scanf("%d",&num);
	while(i<=num){
	if(i%2==0){
		sum=sum-i;
	}
	else{
		sum=sum+i;
	}
	i++;
	}
	printf("Sum=%d",sum);
	return 0;
}
