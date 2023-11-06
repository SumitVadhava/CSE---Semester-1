#include<stdio.h>
#include<string.h>
struct Student{
	char Student_Name[30];
	float Percentage;
	int age;
};
int main(){
    int n;
	printf("Enter Number of students=");
	scanf("%d",&n);
	struct Student s1[n];
	int i;
	for(i=0;i<n;i++){
		printf("Enter Student Name:");
		scanf("%s",s1[i].Student_Name);
		printf("Enter Student Percentage:");
		scanf("%f",&s1[i].Percentage);
		printf("Enter Student Age:");
		scanf("%d",&s1[i].age);
	}
	printf("**Entered Data**");
	printf("\n");
	for(i=0;i<n;i++){
		printf("\nStudent Name:%s",s1[i].Student_Name);
		printf("\nStudent Percentage:%f",s1[i].Percentage);
		printf("\nStudent Age:%d",s1[i].age);
		printf("\n\n");
	}
	return 0;
}
