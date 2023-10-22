#include<stdio.h>
int main(){
	int a[1000],b[1000];
	printf("Enter elements=");
	scanf("%d",&a);
	int i;
	for(i=0;a[i]!='\0';i++){
		b[i]=a[i];
        printf("%d",b[i]);
		
	}
	return 0;
	
}
