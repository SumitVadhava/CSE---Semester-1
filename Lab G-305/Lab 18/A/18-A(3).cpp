#include<stdio.h>
float si(float,float,float);
int main(){
	float P,R,T;
	printf("Enter Principal=");
	scanf("%f",&P);
	printf("Enter Rate Of Interest(ROI)=");
	scanf("%f",&R);
	printf("Enter Time Period=");
	scanf("%f",&T);
	float d=si(P,R,T);
	printf("Ans=%f",d);
	return 0;
}
float si(float P,float R,float T){
	float c=(P*R*T)/100;
	return c;
}
