#include<stdio.h>
int main(){
	char x;
	printf("Enter The Charecter=");
	scanf("%c",&x);
	((x>='A'&&x<='Z')||(x>='a'&&x<='z'))?printf("Your input is character"):printf("Your Input is not character");
	return 0;
}


