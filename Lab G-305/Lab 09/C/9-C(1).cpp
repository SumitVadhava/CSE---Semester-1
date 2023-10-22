#include<stdio.h>
int main(){
	int n,s,m=0,v,r;
	printf("Enter Number=");
	scanf("%d",&n);
	if(n==0){
		printf("Zero");
	}
	while(n>0){
		s=n%10;
		m=m*10+s;
		n=n/10;
	}
	
	while(m>0){
	
		v=m%10;
		switch(v){
			case 0:printf("Zero ");
			break;
			case 1:printf("one ");
			break;
			case 2:printf("Two ");
			break;
		    case 3:printf("Three ");
			break;
			case 4:printf("Four ");
			break;
			case 5:printf("Five ");
			break;
			case 6:printf("Six ");
			break;
			case 7:printf("Seven ");
			break;
			case 8:printf("Eight ");
			break;	
			case 9:printf("Nine ");
			break;
		}
		m=m/10;
	}

	return 0;
}
