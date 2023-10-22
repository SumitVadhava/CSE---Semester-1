#include<stdio.h>
int main(){
	double bs,hr,da;
	printf("Enter Basic Salary=");
	scanf("%lf",&bs);
	if(bs>=10000&&bs<=20000){
	hr=(bs*20)/100;
	da=(bs*80)/100;
	printf("Ans=%lf",bs+hr+da);
	}
	else if(bs>=20000&&bs<=30000){
	hr=(bs*25)/100;
	da=(bs*90)/100;
	printf("Ans=%lf",bs+hr+da);
	}
	else if(bs>=30000){
	hr=(bs*30)/100;
	da=(bs*95)/100;
	printf("Ans=%lf",bs+hr+da);
	
	}
	return 0;

}
