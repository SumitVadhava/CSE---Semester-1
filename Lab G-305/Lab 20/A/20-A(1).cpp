#include<stdio.h>
struct empolyee{
	char Empolyee_Name[300];
    int BirthDate;
    int Birthmonth;
    int Birthyear;
    int Empolyee_Salary;
};
int main(){
	struct empolyee s1;
	printf("Enter Empolyee Name=");
	gets(s1.Empolyee_Name);
	printf("Enter Birthdate Of Empolyee=");
	scanf("%d",&s1.BirthDate);
	printf("Enter Month Of Birth=");
	scanf("%d",&s1.Birthmonth);
        printf("Enter Birth Year=");
	scanf("%d",&s1.Birthyear);
	printf("Enter Empolyee Salary=");
	scanf("%d",&s1.Empolyee_Salary);
	printf("%s\n",s1.Empolyee_Name);
	printf("%d/",s1.BirthDate);
	printf("%d/",s1.Birthmonth);
	printf("%d",s1.Birthyear);
	printf("\n%d",s1.Empolyee_Salary);
	return 0;
}
