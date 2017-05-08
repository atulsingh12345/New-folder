#include<stdio.h>
int main()
{
  int a[100],b[100],c[100],d[100],e[100],f[100],n,i,j,cost=0,m,k,l,tc;
  scanf("%d",&tc);
  for(i=0;i<tc;i++)
   {
     printf("enter the num of cities");
     scanf("%d",&n);
     printf("enter the existing roads");
     scanf("%d",&m);
     for(j=0;j<m;j++)
     scanf("%d%d",&a[j],&b[j]);
     printf("the no. of add. roads");
     scanf("%d",&k);
     for(j=0;j<k;j++)
     scanf("%d%d%d",&c[j],&d[j],&e[j]);
     for(j=0;j<m;j++)
      {
        for(l=0;l<k;l++)
         {
           if(((a[j]==c[l])||(a[j]==d[l]))&&((b[j]==c[l])||(b[j]==d[l])))
           c[l]=0;
         }
      }
      cost=0;
      for(j=0;j<k;j++)
       {
         if(c[j]!=0)
         {
           cost=cost+e[j];
         }
       }
       f[i]=cost;

   }
   for(i=0;i<tc;i++)
   printf("%d",f[i]);

}
