#include<bits/stdc++.h>

using namespace std;

int arra[2000000];
int ans[2000000];
int main()
{

      int n,first,last;


      while(scanf("%d",&n)==1)
      {

          for(int i=1;i<=n;i++)
          {
              scanf("%d",&arra[i]);
          }

          if(n%2==0)
          {
              first=n/2;
              last=first+1;
          }
          else
          {
           first=n/2+1;
           last=first;
          }

          for(int i=1;i<=first;i++)
          {
              if(i%2)
              {
                 int temp=arra[i];
              ans[i]=arra[n-i+1];
              ans[n-i+1]=temp;
              }
              else
              {
                  ans[i]=arra[i];
                  ans[n-i+1]=arra[n-i+1];
              }

          }
          for(int i=1;i<=n;i++)
          {
             printf("%d ",ans[i]);
          }

          printf("\n");

      }

    return 0;
}

