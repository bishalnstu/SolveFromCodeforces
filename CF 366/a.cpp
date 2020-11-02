#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string level1="I hate ",level2="I love ";
    string mid="that ";
    string last="it";
    string ans;
    while(cin>>n)
    {
        ans="";
        for(int i=1;i<=n;i++)
        {

            if(i%2!=0)
            {
               ans+=level1;

                if(i!=n)
                    ans+=mid;
            }
            else
            {
                ans+=level2;
                    if(i!=n)
                        ans+=mid;
            }

        }
        ans+=last;

        cout<<ans<<endl;

    }

    return 0;
}
