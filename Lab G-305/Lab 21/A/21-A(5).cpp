#include<stdio.h>
int main(){
  FILE *f,*f1;
  f=fopen("doc.txt","r");
  f1=fopen("doc1.txt","w");
 char ch=getc(f);
  while(ch!=EOF){
  	putc(ch,f1);
  	ch=getc(f);
  }
  fclose(f);
  fclose(f1);
  printf("File Copied Successfully");
  return 0;
  
}
