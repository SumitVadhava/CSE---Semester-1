#include<stdio.h>
#include<string.h>
struct Book{
	char Book_Title[30];
	char Book_Author[30];
	char Book_Publication[30];
	int price;
};
int main(){
	struct Book b[3];
	int i;
	for(i=0;i<3;i++){
		printf("Enter Book Name=");
		scanf("%s",b[i].Book_Title);
		printf("Enter Book Author=");
		scanf("%s",b[i].Book_Author);
		printf("Enter Book Publication=");
		scanf("%s",b[i].Book_Publication);
		printf("Enter Book Price=");
		scanf("%d",&b[i].price);
	}
	for(i=0;i<3;i++){
		printf("\nBook Name=%s",b[i].Book_Title);
		printf("\nBook Author=%s",b[i].Book_Author);
		printf("\nBook Publication=%s",b[i].Book_Publication);
		printf("\nBook Price=%d",b[i].price);
		printf("\n\n");
			}
			return 0;
}
