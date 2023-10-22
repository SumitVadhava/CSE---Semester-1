#include<stdio.h>
int main(){
	int mark1,mark2,mark3,mark4,mark5,result;
	printf("Enter marks= ");
	scanf("%d %d %d %d %d",&mark1,&mark2,&mark3,&mark4,&mark5);
	result=(mark1+mark2+mark3+mark4+mark5)/5;
	printf("%d",result);
	if(result<=35){
		printf("Fail below");
	}
	else if(result>35&&result<=45){
		printf("Pass Class");
	}
	else if (result>45&&result<=60){
		printf("Second Class");
	}
	else if(result>60&&result<=70){
		printf("First Class");
	}
	else if(result>70){
	printf("Distinction");
	}
	else{
		printf("Invaild");
	}
	return 0;
    
}
