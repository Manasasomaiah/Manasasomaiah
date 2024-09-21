#include<stdio.h>
#include<math.h>
#include<limits.h>
//#define m_n=100
//#define m_w=1000
/* int max(int a,int b)
 {
  return (a>b)?a:b;
  }*/
  int  static a[100][1000];
 int ks(int wt[],int val[],int n,int w)
 {
  for(int i=0;i<=n;i++)
  {
   for(int j=0;j<=w;j++)
   {
       if(i==0||j==0)
           {
              a[i][j]=0; break;
             }
 if(wt[i-1]<=j)
 {
   a[i][j]= fmax(val[i-1]+a[i-1][j-wt[i-1]],a[i-1][j]);
 }
  else if(wt[i-1]>j)
  {
    a[i][j]=a[i-1][j];
 }
}}
 
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
 //return 0;
}


