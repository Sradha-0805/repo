//Cpu scheduling algorithm using fcfs

#include<stdio.h>
int main()
{
    int bt[20], n, wt[20], tat[20], awt = 0, atat = 0, i, j;
    printf("Enter the number of processes\n");
    scanf("%d", &n);
    printf("Enter the burst time of processes\n");
    for(i = 0; i<n; i++)
    {
        scanf("%d", &bt[i]);
    }
    wt[0] = 0;
    for(i = 1; i<n; i++)
    {
        wt[i] = 0;
        for(j = 0; j<i; j++)
        {
            wt[i] = wt[i] + bt[j];
        }
    }
    printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");
    //calculating turnaround time
    for(i = 0; i<n; i++)
    {
        tat[i] = wt[i] + bt[i];
        awt = awt + wt[i];
        atat = atat + tat[i];
        printf("\nP%d\t\t%d\t\t%d\t\t%d", i+1, bt[i], wt[i], tat[i]);
    }
    awt = awt/n;
    atat = atat/n;
    printf("\nAverage Waiting time  %d\n", awt);
    printf("Average Turnaround time  %d\n", atat);

}
