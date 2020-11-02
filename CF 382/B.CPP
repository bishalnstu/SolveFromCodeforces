#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,n1,n2,input,maxm,minm;
    long long sum1,sum2;
    double ans1,ans2;
   vector<int>arra;

    while(scanf("%d %d %d",&n,&n1,&n2)==3)
    {

        for(int i=0;i<n;i++)
        {
            scanf("%d",&input);

            arra.push_back(input);
        }

        sort(arra.begin(),arra.end());


         minm=min(n1,n2);
         maxm=max(n1,n2);


        sum1=0;
        sum2=0;

        for(int i=n-1;i>=n-minm;i--)
        {

            sum1+=(long long)arra[i];

        }

           ans1=sum1/(double)minm;

         for(int i=n-minm-1;i>=n-minm-maxm;i--)
        {

            sum2+=(long long)arra[i];

        }

         ans2=sum2/(double)maxm;

        ans1+=ans2;

        printf("%0.8lf\n",ans1);

          arra.clear();

    }


    return 0;
}
