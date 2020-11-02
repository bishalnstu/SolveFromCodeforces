#include<bits/stdc++.h>

using namespace std;

vector<int>arra;

int main()
{

    int n,tmp,d;
    double ans;

    while(scanf("%d %d",&n,&d)==2)
    {

        for(int i=0;i<n;i++)
        {
            scanf("%d",&tmp);
            arra.push_back(tmp);
        }


        sort(arra.begin(),arra.end());

        int maxm=-1;

        for(int i=0;i<n-1;i++)
        {

            if(arra[i+1]-arra[i]>maxm)
             maxm=arra[i+1]-arra[i];
        }

        ans=maxm/(double)2;

        if(arra[0]-0>ans)
            ans=arra[0];
         if(d-arra[n-1]>ans)
            ans=d-arra[n-1];

        printf("%0.10lf\n",ans);

        arra.clear();
    }

    return 0;
}
