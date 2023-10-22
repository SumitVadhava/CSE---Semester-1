#include<stdio.h>
int main(){
	int n;
    printf("Enter Size of arry=");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++){
		printf("Enter Number=");
		scanf("%d",&a[i]);
		
	}
	printf("Normal order=");
	for(i=0;a[i]!='\0';i++){
	printf(" %d",a[i]);
    }
    printf("\nReverse order=");
    for(i=n-1;i>=0;i--){
    	printf(" %d",a[i]);
	}	
	return 0;
}
