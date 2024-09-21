#include<stdio.h>
int static  a[100][1000];
int ss(int wt[],int n,int s)
{
   
  if(s==0)
        return 1;
  if(n==0)
        return 0;
  if(wt[n-1]<=s)
  {
    return ss(wt,n-1,s-wt[n-1])+ss(wt,n-1,s);
  }
  else
    return ss(wt,n-1,s);
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
 
  printf("no of possibilities to get required sum %d is =%d",s,ss(wt,n,s));
 return 0;
 }
