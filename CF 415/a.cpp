#include<bits/stdc++.h>

using namespace std;

int main()
{

   int n,k,input,cnt;

   double ans,temp;

   while(scanf("%d %d",&n,&k)==2)
    {
        ans=0;

        for(int i=0;i<n;i++)
        {
            scanf("%d",&input);
            ans+=input;
        }

        temp=ans/(double)n;
         int ptr=0;
            cnt=n;

        while(1)
        {
            if((temp+0.5)>=k)
             break;

             ans+=k;
             cnt++;
             ptr++;
            temp=ans/(double)cnt;

        }

        printf("%d\n",ptr);

    }
    return 0;
}
