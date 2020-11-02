#include<bits/stdc++.h>
using namespace std;

int grid[1005][1005];
int row,col;
bool R[1005],C[1005];
int ans;

int main()
{
    int input;
     int x,y,sx,sy;
     vector<pair<int,int> > arra;
     pair<int,int> save;
    while(scanf("%d %d",&row,&col)==2)
    {

        ans=0;

        for(int i=0;i<row;i++)
        {

            for(int j=0;j<col;j++)
            {
              scanf("%d",&input);

                if(input)
                {
                    C[j]=true;
                    R[i]=true;

                }
                if(input==0)
                {
                    save.first=i;
                   save.second=j;
                    arra.push_back(save);
                }
                grid[i][j]=input;

            }

        }

        for(int i=0;i<arra.size();i++)
        {
            sx=arra[i].first;
            sy=arra[i].second;

           x=sx;
           y=sy-1;

           if(!(x<0 or y<0 or x>=row or y>=col))
            {
                if(grid[x][y]==1)
                   ans++;
                   else
                 {
                  if(R[x])
                   ans++;
                 }

            }
             x=sx;
             y=sy+1;

            if(!(x<0 or y<0 or x>=row or y>=col))
            {
                if(grid[x][y]==1)
                     ans++;
                else
                {
                   if(R[x])
                   ans++;

                }

            }

             x=sx-1;
             y=sy;

             if(!(x<0 or y<0 or x>=row or y>=col))
            {
                 if(grid[x][y]==1)
                     ans++;
                     else
                  {
                     if(C[y])
                     ans++;


                  }

            }

             x=sx+1;
             y=sy;

            if(!(x<0 or y<0 or x>=row or y>=col))
            {
                 if(grid[x][y]==1)
                     ans++;
                else
                {
                    if(C[y])
                     ans++;

                }

            }

        }

        cout<<ans<<endl;

        arra.clear();
        memset(R,false,sizeof(R));
        memset(C,false,sizeof(C));
    }

    return 0;
}
