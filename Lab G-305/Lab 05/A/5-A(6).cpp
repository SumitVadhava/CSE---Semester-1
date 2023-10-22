#include<stdio.h>
int main(){
	char n;
	printf("Enter Character=");
	scanf("%c",&n);
	if(n=='a'||n=='A'||n=='e'||n=='E'||n=='I'||n=='i'||n=='O'||n=='o'||n=='U'||n=='u'){
	printf("Given Character Is Vovel");
}
    else{
	printf("Given Character Is Consonant");
}
 return 0;
}
