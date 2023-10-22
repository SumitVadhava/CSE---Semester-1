#include<stdio.h>
int main(){
	int x,y,i,s;
	printf("Enter Base X=");
	scanf("%d",&x);
	printf("Enter Power Y=");
	scanf("%d",&y);
	s=x;
	for(i=1;i<y;i++){
	 x=x*s;
	}
	if(x==0&&y==0){
		printf("Invaild Input");
	}
	else{
	printf("Ans=%d",x);
}
	return 0;
}
