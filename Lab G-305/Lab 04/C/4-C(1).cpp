#include<Stdio.h>
int main(){
	int second;
	printf("Enter Second\'s=");
	scanf("%d",&second);
	int h=second/3600;
	int hr=second%3600;
	
	int m=hr/60;
	int mr=hr%60;
	printf("%d:%d:%d",h,m,mr);
	return 0;
}
