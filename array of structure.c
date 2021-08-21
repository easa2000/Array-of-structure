// program to read and display student information using array of structure

#include<stdio.h>
#include<conio.h>
int main()
{
    struct student
    {
        int roll_no;
        char name[80];
        int fees;
        char DOB[80];
    };
    struct student stud[50];
    int i, n;
    system("cls");
    printf("\n Enter the number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter the roll number: ");
        scanf("%d", &stud[i].roll_no);
        printf("\n Enter the name: ");
        getchar();
        gets(stud[i].name);
        printf("\n Enter the fees: ");
        scanf("%d", &stud[i].fees);
        printf("\n Enter the DOB: ");
        getchar();
        gets(stud[i].DOB);
    }
        system("cls");

    for(i=0;i<n;i++)
    {
        printf("\n ********** DETAILS OF STUDENT %d **********", i+1);
        printf("\n ROLL No. = %d", stud[i].roll_no);
        printf("\n NAME = %s",stud[i].name);
        printf("\n FEES = %d",stud[i].fees);
        printf("\n DOB = %s",stud[i].DOB);
    }
    getch();
    return 0;
    
}
