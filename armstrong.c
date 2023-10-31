#include<stdio.h>
int main()
{
    int num,org,rem,result=0;
    printf("Enter a threee digit number");
    scanf("%d",&num);
    org=num;
    while(org!=0)
    {
        rem=org%10;
        result+=rem*rem;
    }
}