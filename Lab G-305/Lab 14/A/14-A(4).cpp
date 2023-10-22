#include<stdio.h>
int main(){
	int n;
	printf("Enter Size of arry=");
	scanf("%d",&n);
	int a[n];
	int i,s,t,sum=0,count=0;
	for(i=0;i<n;i++){
		printf("Enter number=");
		scanf("%d",&a[i]);
		sum=sum+a[i];
		count++;
		s=a[0];
		if(s>a[i]){
		  	s=a[i];
			
		}
		t=a[0];
		if(t<a[i]){
			t=a[i];
		}
	     
			
		}
		float avg;
		printf("Min=%d",s);
		printf("\nMax=%d",t);
		printf("\nSum=%d",sum);
		avg=sum/count;
		printf("\nAvg=%f",avg);
		return 0;
		
	}
