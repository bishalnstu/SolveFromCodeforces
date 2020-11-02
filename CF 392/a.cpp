#include<bits/stdc++.h>

using namespace std;

vector<int>arra;

int main()
{

     int n,input;

     while(scanf("%d",&n)==1)
    {

          for(int i=0;i<n;i++)
          {
              scanf("%d",&input);
        arra.push_back(input);
          }

         sort(arra.begin(),arra.end());

    int ans=0;

    for(int i=arra.size()-2;i>=0;i--)
    {

        ans+=(arra[n-1]-arra[i]);
    }

    cout<<ans<<endl;

    arra.clear();
    }

    return 0;
}
