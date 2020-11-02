
#include<bits/stdc++.h>
using namespace std;
int R,C,M,row,rcount,col,x,y;
char input;
pair<int,int> src,dest,child,tmp,temp;

map<pair<int,int>,pair<int,int> >parent;
int cnt[1001][1001];
bool bomb[1001][1001];

int main()
{

    while(cin>>R>>C)
    {

        for(int i=0;i<R;i++)
       for(int j=0;j<C;j++)
        {
            bomb[i][j]=false;
            cnt[i][j]=0;
        }

              cout<<R<<C<<endl;
           getchar();
         for(int i=0;i<R;i++)
         {
          for(int j=0;j<C;j++)
          {
              scanf("%c",&input);

              if(input=='*')
                bomb[i][j]=true;

              if(input=='S')
              {
                  src.first=i;
                  src.second=j;
              }
              if(input=='T')
              {

                  dest.first=i;
                  dest.second=j;

              }
          }
          getchar();
         }

        queue<pair<int,int> > q;

        q.push(src);
        cnt[src.first][src.second]=0;

        while(!q.empty())
        {
            src=q.front();
            q.pop();
            int sx=src.first,sy=src.second;

                parent[src]=src;

            for(int i=0;i<4;i++)
            {
                x=sx;
                y=sy;
                if(i==0) x--;
                if(i==1) y++;
                if(i==2) x++;
                if(i==3) y--;

                if((x>=0 && x<R && y>=0 && y<C))
                {
                    child.first=x;child.second=y;
                    if(!bomb[x][y])
                    {
                        cnt[x][y]=cnt[sx][sy]+1;
                        tmp=make_pair(x,y);
                        temp=make_pair(sx,sy);
                        parent[tmp]=temp;
                        q.push(child);
                        bomb[x][y]=true;

                        if(child==dest)
                        {
                            while(!q.empty())
                            q.pop();
                            break;
                        }
                    }
                }
            }
        }

        temp=dest;
        cout<<temp.first<<" "<<temp.second<<endl;

        while(temp!=src)
        {

            temp=parent[temp];

            cout<<temp.first<<" "<<temp.second<<endl;


        }
        cout<<cnt[dest.first][dest.second]<<endl;
    }
}
