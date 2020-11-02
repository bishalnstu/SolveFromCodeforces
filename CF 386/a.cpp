#include<bits/stdc++.h>

using namespace std;

int main()
{

        int a,b,c;
        int ans;

        while(scanf("%d %d %d",&a,&b,&c)==3)
        {
            ans=0;

            while(a>=1 and b>=2 and c>=4)
            {

                ans+=7;

                a=a-1;
                b=b-2;
                c=c-4;

            }

            printf("%d\n",ans);

        }

    return 0;
}
