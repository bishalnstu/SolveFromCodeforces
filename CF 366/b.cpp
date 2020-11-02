#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,input,cnt;
   vector<int>ans;

    while(cin>>n)
    {

           cnt=0;

        for(int i=0;i<n;i++)
        {
            scanf("%d",&input);

                if(input>1)
                {
                    cnt+=(input-1);

                }


            if(cnt%2==0)
                ans.push_back(2);
            else
              ans.push_back(1);
        }

       for(int i=0;i<ans.size();i++)
        printf("%d\n",ans[i]);

       ans.clear();

    }

    return 0;
}
