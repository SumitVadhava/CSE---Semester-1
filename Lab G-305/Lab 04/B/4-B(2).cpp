#include<Stdio.h>
int main(){
	float P,R,T,SI;
	printf("Enter Principal=");
	scanf("%f",&P);
	printf("Enter Rate Of Interest(ROI)=");
	scanf("%f",&R);
	printf("Enter Time Period=");
	scanf("%f",&T);
	SI=(P*R*T)/100;
	printf("SI=%f",SI);	
	return 0;
}
