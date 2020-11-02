#include<bits/stdc++.h>

using namespace std;

vector<int>arra;

int main()
{

       int n,f,x,y,sum,diff,temp,ptr,cnt;
       long long ans;

       while(scanf("%d %d",&n,&f)==2)
        {
             ans=0LL;

            for(int i=0;i<n;i++)
            {
                scanf("%d %d",&x,&y);

                 ptr=min(x,y);
                 ans+=ptr;
                temp=min(2*x,y);

                temp=abs(temp-ptr);
                arra.push_back(temp);

            }

            sort(arra.begin(),arra.end());

              cnt=0;

            for(int i=arra.size()-1;cnt<f;i--)
            {

               ans+=arra[i];
               cnt++;

            }

            printf("%I64d\n",ans);

            arra.clear();

        }
    return 0;
}
