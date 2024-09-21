#include<stdio.h>
#include<stdbool.h>
int static  a[100][1000];
bool ss(int wt[],int n,int s)
{
 for(int i=0;i<=n;i++)
 { 
  for(int j=0;j<=s;j++)
  {
     
  if(j==0)
          a[i][j]=true;
  if(i==0)
         a[i][j]=false;
  if(wt[i-1]<=j)
  {
     a[i][j]=a[i-1][j-wt[i-1]];
    //+ss(wt,n-1,s);
  }
  else
    return a[n][s]= a[i-1][j];
 }
 }
 }
int main()
{
 printf("enter the value of n");
 int n,s,i;
 scanf("%d",&n);
 int wt[n];
 //int a[][];
 printf("enter the weight of each item");
 for(i=0;i<n;i++)
 { 
  printf("for item=%d ",i+1);
  scanf("%d",&wt[i]);
  }
printf("enter the required sum");
scanf("%d", &s);
  
   if(ss(wt,n,s)==1)
   printf("true");
   if(ss(wt,n,s)==0)
   printf("false");
 return 0;
 }
