#include<stdio.h>
//#define m_n=100
//#define m_w=1000
 int max(int a,int b)
 {
  return (a>b)?a:b;
  }
  int  static a[100][1000];
 int ks(int wt[],int val[],int n,int w)
 {
 if(a[n][w]!=-1)
 {
   return a[n][w];
   }
   
  if(n==0||w==0)
  {
  return a[n][w]=0;
  }
 if(wt[n-1]<=w)
 {
  return a[n][w]= max(val[n-1]+ks(wt,val,n-1,w-wt[n-1]),ks(wt,val,n-1,w));
 }
  else if(wt[n-1]>w)
  {
   return a[n][w]=ks(wt,val,n-1,w);
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
 for(int i=0;i<=n;i++)
 {
  for(int j=0;j<=w;j++)
  {
   a[i][j]=-1;
  }
 }
 printf("max value=%d",ks(wt,val,n,w));
 return 0;
}
