#include<stdio.h>
#include<string.h>
struct Student{
    int roll;
    char name[30];
    char DOB[11];
    int majorMarks;
};

int main(){
    int i,n;
    char temp1,temp2;
    printf("Enter the number of students:");
    scanf("%d",&n);
    struct Student s1[n];
    
    for ( i = 0; i < n; i++)
    {
        printf("\nEnter name:");
        scanf("%c",&temp1);
        fgets(s1[i].name, 30, stdin);
        printf("\nEnter DOB:");
        scanf("%s", s1[i].DOB);
        printf("\nEnter the roll no:");
        scanf("%d",&s1[i].roll);
        printf("\nEnter the marks of the major:");
        scanf("%d", &s1[i].majorMarks);       
    }

    printf("\nDetails of the Students\n");

    for (int j = 0; j < n; j++)
    {
       printf("roll no: %d\n", s1[j].roll);
       printf("\nName: %s ", s1[j].name);
       printf("\ndate of birth: %s ",s1[j].DOB);
       printf("\nmarks in major subject: %d\n", s1[j].majorMarks);
    }
    
    return 0;

}