#include<bits/stdc++.h>
using namespace std;

int arra[12345];
vector<int>ans;

int main()
{

    int n,m;


    while(scanf("%d %d",&n,&m)==2)
    {

        for(int i=0;i<m;i++)
        {

            scanf("%d",&arra[i]);
        }

        sort(arra,arra+m);

           int minm=1000000;

       for(int i=n-1;i<m;i++)
         {
             if(arra[i]-arra[i-n+1]<minm)
              {
                  minm=arra[i]-arra[i-n+1];
              }
         }

         printf("%d\n",minm);
    }

    return 0;
}
