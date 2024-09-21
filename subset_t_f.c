#include<stdio.h>
#include<stdbool.h>
 bool ss(int wt[],int n,int s)
{
 if(s==0)
 {
  return true;
  }
  if(n==0)
  {
    return false;
  }
 if(wt[n-1]<=s)
 {
  return (ss(wt,n-1,s-wt[n-1]))||ss(wt,n-1,s);
  //+ss(wt,n-1,s));
 }
  else  
  {
   return  ss(wt,n-1,s);
 }
}
 
int main()
{
int n,s;
int wt[100];
 printf("enter no of items");
 scanf("%d",&n);
 printf("enter the wt  of each item");
 for(int i=0;i<n;i++)
 {
  printf("for item=%d ",i+1);
  scanf("%d",&wt[i]);
  }
 printf("enter the required sum ");
 scanf("%d",&s);
 if(ss(wt,n,s)==1)
 
  printf("true");
  if(ss(wt,n,s)==0)
  printf("false");
   
 return 0;
}
