#include<stdio.h>
#include<math.h>
int main(){
	int n,i,s,count=0,sum=0,j;
	
	printf("Enter Number=");
	scanf("%d",&n);
	int m=n,k=n;
	for(i=0;n>0;i++){
		if((s=n%10)!=0){
			count++;
		}
		
		n=n/10;
	}
	for(i=1;m>0;i++){
		j=m%10;
		sum=sum+(pow(j,count));
		m=m/10;
	}
	if (Power==k) {
		printf("Enter Number is armstrong Number");
	}
	else {
		printf("Enter Number is not armstrong Number");
	}
	return 0;
}

	
	
	

