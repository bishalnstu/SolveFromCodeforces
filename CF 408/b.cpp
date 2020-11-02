#include<bits/stdc++.h>

using namespace std;

map<int,bool>check;
vector<pair<int,int> >arra;

int main()
{

       int n,m,k,temp,currentpos,u,v;
        pair<int,int>tmp;

       bool flag=false;

       while(scanf("%d %d %d",&n,&m,&k)==3)
         {

             for(int i=0;i<m;i++)
             {

                 scanf("%d",&temp);
                 check[temp]=true;

             }

             currentpos=1;

              for(int i=0;i<k;i++)
                {

                     scanf("%d %d",&u,&v);

                      tmp.first=u;
                      tmp.second=v;

                      arra.push_back(tmp);

                }

             for(int i=0;i<k;i++)
             {

                 if(arra[i].first==currentpos)
                 {
                         currentpos=arra[i].second;

                         if(check[currentpos]==true)
                         break;


                 }
                 else if( arra[i].second ==currentpos)
                 {
                         currentpos=arra[i].first;

                         if(check[currentpos]==true)
                         break;

                 }
             }


             if(check[1]==true)
                printf("%d\n",1);
             else
             printf("%d\n",currentpos);

             check.clear();
             arra.clear();
         }

    return 0;
}
