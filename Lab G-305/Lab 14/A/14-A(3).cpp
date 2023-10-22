#include<stdio.h>
int main(){
	int n;
    printf("Enter Size of arry=");
	scanf("%d",&n);
	int a[n];
	int i;
		int EC=0,OC=0;
	for(i=0;i<n;i++){
		printf("Enter Number=");
		scanf("%d",&a[i]);
		if(a[i]%2==0){
       	EC++;
	   }
	   else{
	   	OC++;
	   }
}
    
    printf("Even Count=%d",EC);
    printf("\nOdd Count=%d",OC);
    return 0;
}
