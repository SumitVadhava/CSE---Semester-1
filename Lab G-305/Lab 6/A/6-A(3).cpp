#include<stdio.h>
int main(){
	char ch;
	printf("Enter Charecter=");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z'){
		printf("The character is Uppercase Charecter");
	}
	else if(ch>='a'&& ch<='z'){
		printf("The character is Lowercase Charecter");
	}
	else if(ch>='0' && ch<='9'){
		printf("The Character is a number");
	
	}
	else{
		printf("Entered Character is special charecter");
	}
	return 0;
}
