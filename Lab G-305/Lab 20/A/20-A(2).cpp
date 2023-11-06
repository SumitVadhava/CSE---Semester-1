#include<stdio.h>
struct Book{
	char Book_Title[1000];
	char Book_Author[1000];
	char Book_Publication[1000];
	float Price[1000];
	
};
int main(){
	struct Book b1[1000];
	int i;
	for(i=1;i<=3;i++){
	printf("Enter Book Name=");
	gets(b1[i].Book_Title);
	printf("Enter Book Author=");
	gets(b1[i].Book_Author);
	printf("Enter Book Publication=");
	gets(b1[i].Book_Publication);
	printf("Enter Book Price=");
	scanf("%f",&b1[i].Price);
	}
	printf("\n\n");
	for(i=1;i<=3;i++){
	printf("Book Name:%s\n",b1[i].Book_Title);
	printf("Book Author:%s\n",b1[i].Book_Author);
	printf("Book Publication:%s\n",b1[i].Book_Publication);
	printf("Book Price:%f",b1[i].Price);
	}
	return 0;
}
