#include<stdio.h>
float max(float,float,float);
int main(){
	float a,b,c;
    printf("Enter 1st Number=");
	scanf("%f",&a);
	printf("Enter 2nd Number=");
	scanf("%f",&b);
	printf("Enter 3rd Number=");
	scanf("%f",&c);
	float Max=max(a,b,c);
	printf("max=%f",Max);
	return 0;
}
float max(float a,float b,float c){
	float d;
	if(a>b){
		if(a>c){
			d=a;
		}
		else{
			d=c;
		}
	}
	else if(b>a){
		if(b>c){
			d=b;
		}
		else{
			d=c;
		}
	}
	return d;
}
