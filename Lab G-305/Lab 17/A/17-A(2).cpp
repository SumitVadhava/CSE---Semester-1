#include<stdio.h>
int main(){
	int x=10;
	float y=20;
	char z='S';
	double w=40;
	int *ptr=&x;
	float *ptr1=&y;
	char *ptr2=&z;
	double *ptr3=&w;
	
	printf("%d\n%f\n%c\n%lf\n\n%d\n%d\n%d\n%d\n",*ptr,*ptr1,*ptr2,*ptr3,ptr,ptr1,ptr2,ptr3);
	return 0;
}
