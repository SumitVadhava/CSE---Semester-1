#include<stdio.h>
int main(){
	int n,i=1,flag=0;
	printf("Enter Number=");
	scanf("%d",&n);
	while(i<=n){
	   if(n%i==0){
	   	flag++;
	   }
	   i++;	
	}
  if(flag==2){
  	printf("Enter Number is Prime Number");
  }	
  else{
  	printf("Enter Number is not  Prime Number");
  	
  }
  return 0;
}
