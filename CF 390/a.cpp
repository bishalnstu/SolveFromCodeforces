#include<bits/stdc++.h>

using namespace std;

vector<pair<int,int> >arra;
int a[1000];
pair<int,int>temp;

int main()
{
     int n,start,finish,sum,cnt,knt;
     bool flag,flg=false;
     while(scanf("%d",&n)==1)
     {
         cnt=0;

         for(int i=1;i<=n;i++)
         {
             scanf("%d",&a[i]);

             if(a[i]==0)
                cnt++;
         }
         int j;

          if(cnt==n)
                printf("NO\n");
            else
          {

            for(j=1;j<=n;j++)
             {
                 if(a[j]!=0)
                 {
                     start=j;
                     finish=j;
                     temp=make_pair(start,finish);
                     arra.push_back(temp);
                 }
                 else
                 {
                     start=j;

                     while(a[j]==0 and j<=n)
                     {
                        j++;

                     }

                     if(j<=n)
                     {
                       finish=j;
                       temp=make_pair(start,finish);
                      arra.push_back(temp);
                     }

                 }
             }

            if(arra[arra.size()-1].second!=n)
             {
                 arra[arra.size()-1].second=n;
             }
        if(arra.size()==0)
            printf("NO\n");
        else
        {
            printf("YES\n");
            printf("%d\n",arra.size());

            for(int i=0;i<arra.size();i++)
            {
                printf("%d %d\n",arra[i].first,arra[i].second);
            }

        }


          }

        arra.clear();
     }


    return 0;
}
