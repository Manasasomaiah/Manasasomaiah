#include<stdio.h>
#include<math.h>
#include<limits.h>
int ccm(int wt[],int n,int s)
{
 if(s==0)
 {
  return 0;
  }
  if(n==0)
  {
    return INT_MAX-1000;
  }
 if(wt[n-1]<=s)
 {
  return fmin(1+ccm(wt,n,s-wt[n-1]),ccm(wt,n-1,s));
 }
  else  
  {
   return  ccm(wt,n-1,s);
 }
}
 
int main()
{
int n,s;
 printf("enter no of items");
 scanf("%d",&n);
 int wt[n];
 printf("enter the wt  of each item");
 for(int i=0;i<n;i++)
 {
  printf("for item=%d ",i+1);
  scanf("%d",&wt[i]);
  }
 printf("enter the required sum ");
 scanf("%d",&s);
 printf("%d",ccm(wt,n,s));
// return 0;
}
