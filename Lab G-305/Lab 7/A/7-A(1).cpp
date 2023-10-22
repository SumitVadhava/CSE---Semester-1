#include<stdio.h>
int main(){
	int days;
	printf("Enter day Number(1-7)=");
	scanf("%d",&days);
    switch(days){
	case 1:
	printf("Sunday\n");
	break; 
	case 2:
		printf("Monday\n");
	break; 
	case 3:
	printf("Tuesday\n");
	break; 
	case 4:
	printf("Wednseday\n");
	break; 
	case 5:
	printf("Thursday\n");
	break; 
	case 6:
	printf("Friday\n");
	break; 
	case 7:
	printf("Saturday\n");
	break; 
}
return 0;		
	
	    
	
}
