#include<stdio.h>
struct student
{
    char name[15];
    int ID;
    float percentage;
}s[5];
int main()
{
    int i;
    struct student s;
    for(i=0;i<5;++i)
    {
    printf("enter the name of the student:");
    scanf("%s",s.name);
    printf("enter the ID for the  student:");
    scanf("%d",&s.ID);
    printf("enter the percentage of student:");
    scanf("%f",&s.percentage);
    }
    for(i=0;i<5;i++)
    {
    printf("name: %s\n",s.name);
    printf("ID: %d \n",s.ID);
    printf("percentage: %.2f\n",s.percentage);
    }
    return 0;
}