#include<bits/stdc++.h>
#define fast1 ios_base::sync_with_stdio(false);
#define fast2 cin.tie(0)
using namespace std;

int main()
{

    fast1;fast2;

    unsigned long long l1,r1,l2,r2,k,lowlimit,uplimit,ans;

    cin>>l1>>r1>>l2>>r2>>k;

      ans=0;
        if(l2>r1)
        {
           cout<<ans<<endl;

        }
        else
        {
            if(l1>=l2)
            lowlimit=l1;
             else
             lowlimit=l2;


            if(r1<=r2)
            uplimit=r1;
            else
             uplimit=r2;

            if(uplimit<lowlimit)
             cout<<ans<<endl;
             else
             {
                ans=uplimit-lowlimit+1;

                if(k>=lowlimit and k<=uplimit)
              ans=ans-1;

              cout<<ans<<endl;

             }

        }

    return 0;
}
