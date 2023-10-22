#include<stdio.h>
#include<string.h>
int main(){
	char a[1000];
	printf("Enter String=");
	gets(a);
	printf("The String is=%s",a);
	printf("\nLenth of string is=%d",strlen(a));
	return 0;
}
