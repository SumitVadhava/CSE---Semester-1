#include<stdio.h>
int main(){
	int a[1000],n;
	printf("Enter Number of elements=");
	scanf("%d",&n);
	int i,s=0;
	for(i=0;i<n;i++){
		printf("Enter Elements=");
		scanf("%d",&a[i]);
		if(a[i]%3==0)
		{
			s++;
		}
	}
	printf("Total Number which is divisible by 3 in  Arry is=%d",s);
	return 0;
}
