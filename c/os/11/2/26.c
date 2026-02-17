#include <stdio.h>
int main()
{
int at[4],bt[4],ct[4],tat[4],wt[4];
for(int i=0;i<4;i++)
{
printf("enter arrival time of first process:");
scanf("%d",&at[i]);
printf("enter burst time of first process:");
scanf("%d",&bt[i]);
}
int n=4;
for(int i=0;i<n;i++)x
{
for(int j=0;j<n-1-i;j++)
{
if(at[j]>at[j+1])
{
int temp=at[j];
at[j]=at[j+1];
at[j+1]=temp;
int temp1=bt[j];
bt[j]=bt[j+1];
bt[j+1]=temp1;
}
}
}
int sum=0;
for (int i=0;i<n;i++)
{
sum=sum+bt[i];
ct[i]=sum;
}
for (int i=0;i<n;i++)
{
tat[i]=ct[i]-at[i];
}
for (int i=0;i<n;i++)
{
wt[i]=tat[i]-bt[i];
}
for (int i=0;i<n;i++)
{
printf("arrival time of first process:");
printf("%d",at[i]);
printf("burst time of first process:");
printf("%d",bt[i]);
printf("tat of first process:");
printf("%d",tat[i]);
printf("ct time of first process:");
printf("%d",ct[i]);
printf("waiting time of first process:");
printf("%d",wt[i]);
}
float sum2=0;
float sum1=0;
float  tat_avg,wt_avg;
for(int i=0;i<n;i++)
{
   sum2=sum2+tat[i];
  sum1=sum1+wt[i];
}
   tat_avg=sum2/n;
   wt_avg=sum1/n;
  printf("tat avg: %f\n",tat_avg);
   printf("wt avg: %f\n",wt_avg);

}