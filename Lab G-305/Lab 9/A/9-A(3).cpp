#include<stdio.h>
int main(){
    int i=1,x,y,s;
	printf("Enter Base X=");
	scanf("%d",&x);
	s=x;
	printf("Enter Power Y=");
	scanf("%d",&y);
	while(i<y){
		x=x*s;
		i++;
	}
	printf("Ans=%d",x);
	return 0;
}
		
