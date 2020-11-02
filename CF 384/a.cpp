#include<bits/stdc++.h>

using namespace std;

int main()
{

     int n,a,b,track;
     string input;
      int ans;

     while(scanf("%d %d %d",&n,&a,&b)==3)
    {
          getchar();

        getline(cin,input);


        char temp=input[b-1];

        if(a<b)
        {
        for(int i=a;i<=n;i++)
        {
            if(input[i-1]==input[a-1])
            {
                track=i;
            }
            if(input[i-1]==temp)
            {
                ans=abs(track-i);
                break;
            }
        }

        }
        else
        {

            for(int i=a;i>=0;i--)
        {
            if(input[i-1]==input[a-1])
            {
                track=i;

            }
            if(input[i-1]==temp)
            {
                ans=abs(track-i);
                break;
            }
        }

        }

        cout<<ans<<endl;
    }
    return 0;
}
