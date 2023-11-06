#include<stdio.h>
void arry(int n);
void main(){
	int n;
	printf("Enter lenth of arry=");
	scanf("%d",&n);
	arry(n);

}
 void arry(int n){
  		int arr[n];
  		int i;
  	for(i=0;i<n;i++){
  		printf("Enter element=");
  		scanf("%d",&arr[i]);
	  }
	  	for(i=0;i<n;i++){
  		printf("%d\n",arr[i]);
	  }
	  
  }
  
