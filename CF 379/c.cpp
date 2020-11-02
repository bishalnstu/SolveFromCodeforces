
#include<bits/stdc++.h>

using namespace std;

map<int,pair<int,int> >fmapp;
map<int,pair<int,int> >smapp;

int binsrch(int first,int last,int key)
{
    int mid,save=-1;

     while( first <= last )
   {
   	  mid = (first + last)/2;

      if ( smapp[mid].second <key)
      {
          save=mid;
          first = mid + 1;
      }

      else if (smapp[mid].second == key)
      {
           save=mid;
         break;
      }
      else
         last = mid-1;

   }

    return save;
}

int main()
{
    bool flag;
    int temp,n,m,k,p,q,r,x,s;
     unsigned long long minval,tmp,ret,remainder;
    while(scanf("%d %d %d",&n,&m,&k)==3)
    {

        scanf("%d %d",&x,&s);
        minval=(unsigned long long)x*(unsigned long long)n;

        for(int i=0;i<m;i++)
        {
            cin>>temp;
            fmapp[i].first=temp;

        }

        for(int i=0;i<m;i++)
        {
            cin>>temp;
            fmapp[i].second=temp;

        }

         for(int i=0;i<k;i++)
        {
            cin>>temp;
            smapp[i].first=temp;

        }

         for(int i=0;i<k;i++)
        {
            cin>>temp;
            smapp[i].second=temp;

        }

        for(int i=0;i<m;i++)
        {

               if(fmapp[i].second<=s)
               {

                   ret=binsrch(0,k-1,s-fmapp[i].second);

                    if(ret!=-1)
                    {
                        ret=smapp[ret].first;
                       tmp=(unsigned long long)fmapp[i].first*(n-ret);
                      if(tmp<minval)
                      minval=tmp;

                    }
                    else
                    {
                        tmp=(unsigned long long)n*fmapp[i].first;

                        if(tmp<minval)
                         minval=tmp;

                    }
               }

        }

              ret=binsrch(0,k-1,s);

                  if(ret!=-1)
                    {
                        ret=smapp[ret].first;
                       tmp=(unsigned long long)x*(n-ret);
                      if(tmp<minval)
                      minval=tmp;

                    }

          cout<<minval<<endl;

        fmapp.clear();
        smapp.clear();
    }

    return 0;
}
