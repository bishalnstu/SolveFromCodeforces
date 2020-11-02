#include<bits/stdc++.h>

using namespace std;

int arra[100000+5];
map<pair<int,int>,bool>check;
pair<int,int>temp,tmp;
int main()
{

 int n,k,indx,a,b;
long long ans,sum,save;
 while(scanf("%d %d",&n,&k)==2)
{
    ans=0LL,sum=0LL,save=0LL;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arra[i]);
        sum+=(long long)arra[i];
        if(i>1)
        {
           ans+=(long long)(arra[i]*arra[i-1]);
        }

    }
        ans+=(long long)(arra[1]*arra[n]);

    for(int i=0;i<k;i++)
    {
        scanf("%d",&indx);
        sum-=(long long)arra[indx];
        save+=(long long)((sum)*arra[indx]);

        if(indx!=1)
        {
            a=indx;
            b=indx-1;
            temp=make_pair(a,b);
            tmp=make_pair(b,a);

               if(!check[temp] and !check[tmp])
             ans-=(arra[indx]*arra[indx-1]);

             check[temp]=true;
             check[tmp]=true;
        }
        else
        {
            a=indx;
            b=n;
            temp=make_pair(a,b);
            tmp=make_pair(b,a);

              if(!check[temp] and !check[tmp])
              ans-=(arra[indx]*arra[n]);

             check[temp]=true;
             check[tmp]=true;
        }
        if(indx!=n)
        {
            a=indx;
            b=indx+1;
            temp=make_pair(a,b);
            tmp=make_pair(b,a);

             if(!check[temp] and !check[tmp])
             ans-=(arra[indx]*arra[indx+1]);

             check[temp]=true;
             check[tmp]=true;
        }
        else
        {
            a=indx;
            b=1;
            temp=make_pair(a,b);
            tmp=make_pair(b,a);

             if(!check[temp] and !check[tmp])
            ans-=(arra[indx]*arra[1]);

             check[temp]=true;
             check[tmp]=true;
        }

    }

    ans+=save;

   cout<<ans<<endl;

    check.clear();
}
    return 0;
}
