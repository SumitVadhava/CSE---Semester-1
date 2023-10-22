#include<stdio.h>
int main(){
	int a=0,b=1,c,n,i;
	printf("Enter Number=");
	scanf("%d",&n);
	if(n==1){
		printf("0");
	}
	else if(n==2){
		printf("0,1");
	}
	else{
		printf("0,1,");
		for(i=3;i<=n;i++){
			c=a+b;
			if(i==n){
				printf("%d.",c);
			}
			else{
				printf("%d,",c);
			}
			a=b;
			b=c;
		}
		
	
	}
	return 0; 
	
	
}
