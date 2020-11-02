#include<bits/stdc++.h>

using namespace std;

unsigned long long findpow(unsigned long long k)
{
    unsigned long long tmp=1;
    int i=1;

    for(i=1;i<=50;i++)
    {
        tmp=tmp*(unsigned long long)2;

        if(tmp>k)
        {
            break;
        }
    }

    tmp/=(unsigned long long)2;

    return (k-tmp);
}

int findptr(unsigned long long k)
{
    unsigned long long tmp=1;
    int i=1;

    for(i=1;i<=50;i++)
    {
        tmp=tmp*(unsigned long long)2;
        if(tmp>k)
        {
            break;
        }
    }

    return (i);
}


int main()
{

  unsigned long long n,k,temp,p;

     while(scanf("%I64d %I64d",&n,&k)==2)
     {
         temp=k;
           int cnt=0;

           while(temp>2)
           {
                p=temp;
               temp=findpow(temp);

               cnt++;
           }
            cnt--;

           if(temp==0)
           {
               cout<<findptr(p)<<endl;

           }
           else if(temp==0 and cnt>=1)
           {
               cout<<findptr(k)-cnt-1<<endl;

           }
           else
           cout<<temp<<endl;
     }

    return 0;
}

