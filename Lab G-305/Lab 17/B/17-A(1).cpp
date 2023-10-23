#include<stdio.h>
int main(){
	int x=10;
	int *ptr;
	ptr=&x;
	printf("Value=%d\n Address=%d",*ptr,ptr);
	return 0; 
}
