#include<stdio.h>
int main(){
	int days,y,yr,w,wr;
	printf("Enter Day\'s=");
	scanf("%d",&days);
	y=days/365;
	yr=days%365;
	w=yr/7;
	wr=yr%7;
	printf("Ans= %d year: %d weeks: %d days",y,w,wr);
	return 0;
}
