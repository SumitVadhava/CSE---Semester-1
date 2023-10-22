#include<stdio.h>
int main(){
	char a[1000],b[1000];
	printf("Enter String 1= ");
	gets(a);
	printf("Enter String 2= ");
	gets(b);
    int i,j,count=0;
	for(i=0;b[i]!='\0';i++){
		a[i]=b[i];
	}
	printf("%s",a);

	return 0;	
}
