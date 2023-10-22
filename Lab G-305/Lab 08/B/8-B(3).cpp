//print first 50 numbers in series 1,4,7,10...
#include<stdio.h>
int main(){
    int i=1,a=1;
    while(i<=50){
    if(i<=49){
	 printf("%d,",a);
     a=a+3;}
     else{
     	printf("%d.",a);
	 }
     i++;
	}
	return 0;
}
