#include<bits/stdc++.h>

using namespace std;

vector<int>node1;
vector<int>node2;
vector<int>val;
map<int,bool>flag;

int main()
{
    int n,m,k,input;
    pair<int,int>temp,tmp;

    while(scanf("%d %d %d",&n,&m,&k)==3)
    {

        for(int i=0;i<m;i++)
        {
            int u,v,w;

              scanf("%d %d %d",&u,&v,&w);

                 node1.push_back(u);
                 node2.push_back(v);
                 val.push_back(w);

        }

        for(int i=0;i<k;i++)
        {
           scanf("%d",&input);
            flag[input]=true;
        }

         long minm=1000000000+2;

            for(int i=0;i<node1.size();i++)
            {

              if( (flag[node1[i]] and !flag[node2[i]]) or (!flag[node1[i]] and flag[node2[i]]) )
               {
                   if(val[i]<minm)
                    minm=val[i];

               }
            }

          if(minm!=1000000002)
         printf("%d\n",minm);
           else
            printf("-1\n");

         flag.clear();
          node2.clear();
          node1.clear();
          val.clear();
    }

    return 0;
}

