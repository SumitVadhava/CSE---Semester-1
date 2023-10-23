#include<stdio.h>
int main(){
	int n;
    printf("Enter Number of Elements=");
    scanf("%d",&n); 
	int i, a[n];
	for(i=0;i<n;i++){
		printf("Enter Element=");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("%d\n",*(a+i));
	}
	return 0;
	
}
