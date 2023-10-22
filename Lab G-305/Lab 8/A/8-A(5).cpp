#include<stdio.h>
int main(){
	int num,i=1,Evencount=0,Oddcount=0;
	while(i<=10){
	printf("Enter Number=");
	scanf("%d",&num);
	if(num%2==0){
		Evencount+=1;
	}
	else{
		Oddcount+=1;
	}
	i++;
	}
	printf("Evencount=%d  Oddcount=%d",Evencount,Oddcount);
	
	return 0;
	
}
