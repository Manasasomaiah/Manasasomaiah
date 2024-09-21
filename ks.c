#include<stdio.h>
int max(int a,int b)
{
 return (a>b)?a:b;
 }
int ks(int wt[],int val[],int n,int w)
{
 if(n==0||w==0)
 {
  return 0;
  }
 if(wt[n-1]<=w)
 {
  return max(val[n-1]+ks(wt,val,n-1,w-wt[n-1]),ks(wt,val,n-1,w));
 }
  else if(wt[n-1]>w)
  {
   return ks(wt,val,n-1,w);
 }
}
 
int main()
{
int n,w;
int wt[100],val[1000];
 printf("enter no of items");
 scanf("%d",&n);
 printf("enter the wt and val of each item");
 for(int i=0;i<n;i++)
 {
  printf("for item=%d ",i+1);
  scanf("%d%d",&wt[i],&val[i]);
  }
 printf("enter the weight of the bag");
 scanf("%d",&w);
 printf("max value=%d",ks(wt,val,n,w));
 return 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
}
