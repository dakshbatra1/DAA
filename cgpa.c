#include<stdio.h>
struct student{
    char name[50];
    int age;
    float cgpa;
    char branch[50];
}s[20];
int main()
{
    int j;
    printf("Enter names of students");
    for(j=0;j<=20;j++)
    {

    printf("Enter the name of %d student",j+1);
    scanf ("%s", s[j].name);
printf("Enter the age of the % student", j+1);
scanf ("%d", s[j].age) ;
printf("Enter the CGPA of the % student", j+1);
scanf ("%f",s[j].cgpa);
printf ("Enter the branch of the % student", j+1); scanf ("%s",s[j].branch);
    }


}
