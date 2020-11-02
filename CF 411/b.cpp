#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    string ans,dummy,tmp;
    while(scanf("%d",&n)==1)
    {
        ans="";
        dummy="aab";
        for(int i=1;i<=n/3;i++)
        {
            if(ans.size()>=n)
                break;

            ans+=dummy;
            ans+="b";

        }

         if(n<3)
            ans=dummy;
         if(ans.size()<n)
            ans+=dummy;

        tmp=ans.substr(0,n);

        cout<<tmp<<endl;

    }
    return 0;
}
