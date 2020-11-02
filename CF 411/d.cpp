#include<bits/stdc++.h>

using namespace std;

const int md = 1e9+7;

int main()
{

    string input;

    int ans,feed;

    while(getline(cin,input))
   {
        ans=0;
        feed=0;
       for(int i=input.size()-1;i>=0;i--)
       {

            if(input[i]=='b')
            {

                while(input[i]=='b' and i>=0)
                {

                    feed=(feed+1)%md;

                   i--;
                }

            }

           if(input[i]=='a')
            {
                ans=(ans+feed)%md;
                feed=(feed*2)%md;
            }

       }

       cout<<ans<<endl;

   }

    return 0;
}
