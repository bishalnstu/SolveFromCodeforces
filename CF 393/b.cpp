#include<bits/stdc++.h>

using namespace std;

long long n,m,k;

long long findsum(long long key,long long feed)
{
    long long ans,temp;
    feed=key-feed;
    ans=(key*(key+1))/2LL;
    printf("%lld\n",ans);
    temp=(feed*(feed+1))/2LL;
    printf("%lld\n",temp);
    ans-=temp;
     printf("%lld\n",ans);
   return  ans;
}

long long bsearch(long long left ,long long ri8)
{
     long long mid,indx,cal,l,r;

     long long first=1LL,last=m;

    while(first<=last)
        {
         mid=(first+last)/2LL;
         printf("mid = %I64d\n",mid);
         printf("left\n");
         l=findsum(mid-1,left);
          printf("ri8\n");
         r=findsum(mid-1,ri8);

        // if(l>=m or r>=m)
            //cal=m+1;
        // else if(l<=0 or r<=0)
            //cal=m+1;
         //else
         cal=mid+l+r;
         //printf("%lld\n",cal);

       if(cal==m)
         {
             indx=mid;
             break;
         }
         else if(cal<m)
         {
             first=mid+1;
             indx=mid;
         }
         else
         last=mid-1;

         }

    return indx;
}


int main()
{

   scanf("%I64d %I64d %I64d",&n,&m,&k);

         long long ret=bsearch(k-1,n-k);

          if(n==m)
            printf("%I64d\n",1LL);
          else
         printf("%I64d\n",ret);

    return 0;
}

