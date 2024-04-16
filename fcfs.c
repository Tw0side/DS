#include<stdio.h>
#include<stdlib.h>
struct fcfs
{
 int pid;
 int btime;
 int wtime;
 int ttime;
}p[10];
int main()
{
 int i,n;
 int totwtime=0,totttime=0;
 printf("\n......FCFS Scheduling......\n");
 printf("enter the number of process: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  p[i].pid=1;
  printf("enter the burst time of the process\n");
  scanf("%d",&p[i].btime);
 }
 p[0].wtime=0;
 p[0].ttime=p[0].btime;
 for(i=0;i<n;i++)
 {
  p[i].wtime=p[i-1].wtime+p[i-1].btime;
  p[i].ttime=p[i].wtime+p[i].btime;
  totwtime=totwtime+p[i].wtime;
  totttime=totttime+p[i].ttime;
 }
 printf("\ntotal waiting time = %d",totwtime);
 printf("\naverage waiting time = %d",totwtime/n);
 printf("\ntotal turn around time = %d",totttime);
 printf("\naverage waiting time = %d\n",totttime/n);
}
