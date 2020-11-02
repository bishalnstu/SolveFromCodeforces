#include<bits/stdtr1c++.h>

using namespace std;

int arra[10000+5];

int main()
{
    int n,m,minm,maxm,diffsum,cnt,rem,ans1,ans2;
    bool flag=false;

    while(scanf("%d",&n)==1)
    {
        scanf("%d",&m);

        maxm = -10000;
        minm=1000000+5;
        diffsum=0;
        cnt=0;
        rem=0;

        for(int i=0;i<n;i++)
        {
            scanf("%d",&arra[i]);

            if(arra[i]>maxm)
                maxm=arra[i];

            if(arra[i]<minm)
                    minm=arra[i];

            if(i>0)
                diffsum+=abs(arra[i]-arra[i-1]);

        }

            printf("%d\n",diffsum);

            printf("%d %d\n",maxm,minm);

        if(m-diffsum>0)
        {
            diffsum=m-diffsum;

            cnt=diffsum/n;

            rem=diffsum%n;
        }
        else if(m-diffsum<0)
        {
            ans1=minm+m;
            flag=true;
        }

        if(!flag)
        {

        if(rem>0)
        ans1=maxm+cnt+1;
        else
        ans1=maxm+cnt;

        }

        ans2=maxm+m;

        printf("%d %d\n",ans1,ans2);
    }

}
