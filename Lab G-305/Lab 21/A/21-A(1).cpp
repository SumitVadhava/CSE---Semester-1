#include<stdio.h>
int main(){
      FILE *f,*f1;
      f=fopen("doc.txt","r");
      f1=fopen("doc1.txt","w");
      if(f==NULL){
      	printf("File is not Exist");
	  }
	  else{
	  	printf("File is opened successfully");
	  }
	  fclose(f);
	  fclose(f1);
	  return 0;
}
