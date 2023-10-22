#include<Stdio.h>
int main(){
	float F,C;
	printf("Enter Temperture in Fahrenheit=");
	scanf("%f",&F);
	C=((F-32)*5)/9;
	printf("Temperture in Celsius=%f",C);
	return 0;
}
