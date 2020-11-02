#include<bits/stdc++.h>

using namespace std;

int main()
{

   int a,b,n,x,y,v;
   double temp,ans;

   while(scanf("%d %d",&a,&b)==2)
    {
         ans=(double)1000000.0;
        scanf("%d",&n);

        for(int i=0;i<n;i++)
        {

            scanf("%d %d %d",&x,&y,&v);

            temp=(double)((x-a)*(x-a))+((y-b)*(y-b));

            temp=sqrt(temp);

            temp/=v;

            if(temp<ans)
                ans=temp;
        }

       printf("%0.18lf\n",ans);

    }
    return 0;
}
