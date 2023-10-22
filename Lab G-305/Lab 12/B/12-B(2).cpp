#include<stdio.h>
int main(){
      int i,j,n;
      double fac=1.0;
	  printf("Enter Number Greterthan 5\n=");
	  scanf("%d",&n);
	  double e=1.0;
	  for(i=1;i<=n;i++){
	  	 fac=fac*i;
	  	 e=e+1/fac;
	  }
	  printf("Ans=%lf",e);
	  return 0;
	  
}


