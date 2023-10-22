#include<stdio.h>
int main(){
	int n;
    printf("Enter Size of arry=");
	scanf("%d",&n);
	int a[n];
	int i;
		int PC=0,NC=0;
	for(i=0;i<n;i++){
		printf("Enter Number=");
		scanf("%d",&a[i]);
		if(a[i]>=0){
       	PC++;
	   }
	   else{
	   	NC++;
	   }
}
    
    printf("Positive Count=%d",PC);
    printf("\nNegitive Count=%d",NC);
    return 0;
}
