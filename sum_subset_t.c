#include<stdio.h>
int static a[100][1000];
int ss(int wt[],int n,int s)
{
	//int a[n+1][s+1];
  for(int i=0;i<=n;i++)
  {
    for(int j=0;j<=s;j++)
    {
      if(j==0)
       a[i][j]=1;
      continue;
      if(i==0)
      a[i][j]=0;
      continue;
      if(wt[i-1]<=j)
      {
       a[i][j]=a[i-1][j-wt[i-1]]+a[i-1][j];
      }
      else 
        a[i][j]=a[i-1][j];
    }
  }
}
int main()
{
 int n,s,i;
 
 printf("enter n value");
 scanf("%d",&n);
  int wt[n];
 printf("enter the wt of each item");
 for(i=0;i<n;i++)
 {
  printf("for each item=%d",i+1);
  scanf("%d",&wt[i]);
 }
 printf("enter the required sum");
 scanf("%d",&s);
  printf("no of possibilities to get required sum %d is =%d",s,ss(wt,n,s));
 return 0;
 }
