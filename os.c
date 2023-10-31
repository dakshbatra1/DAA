#include<stdio.h>
void waitingtime(int n,int bt[],int wt[])
{
    wt[0]=0;
   for(int i=1;i<=n;i++)
   {
    wt[i]=bt[i-1]+wt[i-1];
   } 
}

int main()
{
    int n;
    printf("enter number of processes:");
    scanf("%d",&n);
    int bt[n];
    for(int i=0;i<=n-1;i++)
    {
        printf("enter burst time %d",i+1);
        scanf("%d",&bt[i]);
    }

    waitingtime(n,bt,wt);
    printf("processID \t burst time \t waiting time \n");
    for(int i=0;i<=n-1;i++)
    {
        printf("%d \t %d \t %d",i+1,bt[i],wt[i]);
    }
    return 0;
}