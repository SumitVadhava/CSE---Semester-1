#include<stdio.h>
int main(){
	FILE *f;
	f=fopen("C.txt","r");
	char ch;
	ch=getc(f);
	int ln=0,character=0,tab=0,space=0;
	while(ch!=EOF){
		if(ch=='\n'){
			ln++;
		}
		else if(ch=='\t'){
			tab++;
		}
		else if(ch==' '){
			space++;
		}
		else{
			character++;
			ch=getc(f);
		}
	}
	printf("lines=%d\nTab=%d\nSpace=%d\nCharacter=%d",ln,character,tab,space);
	return 0;
}

