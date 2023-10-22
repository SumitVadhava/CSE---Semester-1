#include<stdio.h>
int main(){
	float unit,bill;
	printf("Enter Unit's=");
	scanf("%f",&unit);
	if(unit<=50){
		unit=unit*0.50;
		bill=(unit*20)/100;
		printf("Bill=%f",unit+bill);
	}
	else if(unit>50&&unit<=150){
		unit=50*0.50+(unit-50)*0.75;
		bill=(unit*20)/100;
		printf("Bill=%f",unit+bill);
	}
	else if(unit>150&&unit<=250){
		unit=50*0.50+100*0.75+(unit-150)*1.20;
			bill=(unit*20)/100;
		printf("Bill=%f",unit+bill);
	}
		
    else if(unit>250){
		unit=50*0.50+100*0.75+100*1.20+(unit-250)*1.50;
		bill=(unit*20)/100;
		printf("Bill=%f",unit+bill);
}
return 0;
}
