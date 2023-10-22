#include<stdio.h>
int main(){
	int n;
	printf("Enter Number=");
	scanf("%d",&n);
	int arr[32],i,j;
	for(i=0;i<32;i++){
		arr[i]=0;
	}
    for(i=0;n>0;i++){
    	j=n%2;
    	n=n/2;
    	arr[i]=j;
	}
	for (i=31; i>=0; i--) {
		printf("%d",arr[i]);
	}

return 0;		
}

