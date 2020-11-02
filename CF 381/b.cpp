#include<bits/stdc++.h>

using namespace std;

int main()
{

    vector<int>ans;
    int arra[1000];
    int n,m,tmp,maxm,ptr,low,high;

    while(scanf("%d %d",&n,&m)==2)
    {
        maxm=0,ptr=0;

        for(int i=1;i<=n;i++)
        scanf("%d",&arra[i]);

        for(int i=0;i<m;i++)
        {
            scanf("%d %d",&low,&high);
            tmp=0;
            for(int j=low;j<=high;j++)
            {
                tmp+=arra[j];

            }
            ans.push_back(tmp);
        }

        sort(ans.begin(),ans.end());

        if(ans[m-1]>=0)
        {
           for(int i=m-1;i>=0;i--)
        {
            if(ptr+ans[i]>maxm)
            {
                maxm+=ans[i];
                ptr=maxm;

            }
            else
                break;
        }
            printf("%d\n",maxm);
        }
        else
            printf("%d\n",maxm);

        ans.clear();
    }
    return 0;
}
