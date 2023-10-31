#include <stdio.h>

  struct student {
                char name[20];
                int rollno;
                float CGPA;
                int age;
                char branch[20];
               };
int main( )
{
        int i,n;
        printf("Enter how many records u want to store :: ");
        scanf("%d",&n);
        struct student stuarr[n];
        printf("Enter name, roll no. and marks and age and branch Below :: \n");

        for(i=0; i<n; i++)
        {
                printf("\nEnter %d record :: \n",i+1);

                printf("Enter Name :: ");
                scanf("%s",stuarr[i].name);
                printf("Enter RollNo. :: ");
                scanf("%d",&stuarr[i].rollno);
                printf("Enter CGPA :: ");
                scanf("%f",&stuarr[i].CGPA);
                printf("Enter age");
                scanf("%d",&stuarr[i].age);
                printf("Enter Branch");
                scanf("%s",&stuarr[i].branch);
        }
        printf("\n\tName\tRollNo\tCGPA\tage\tbranch\t\n");
        for(i=0; i<n; i++)
                printf("\t%s\t%d\t%.2f\t%d\t%s\t\n", stuarr[i].name, stuarr[i].rollno, stuarr[i].CGPA,stuarr[i].age,stuarr[i].branch);

        return 0;
        }
