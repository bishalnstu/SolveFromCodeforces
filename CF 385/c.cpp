#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,m,k,u,v,input;

    while(scanf("%d %d %d",&n,&m,&k)==3)
    {

        for(int i=0;i<k;i++)
        {
         scanf("%d",&input);
        }

        for(int i=0;i<m;i++)
        {
            scanf("%d %d",&u,&v);
        }


        int ans=n-k+1;

        ans=(ans*(ans-1))/2;

         ans-=m;

       printf("%d\n",ans);
    }

    return 0;
}
