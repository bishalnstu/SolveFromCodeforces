#include<bits/stdc++.h>

using namespace std;

vector<int>edges[800005];
long int cost[800005];
bool visited[800005];
int level[800005];

int bfs(int src,int dest)
{
	queue<int>Q;
	Q.push(src);
	visited[src]=true;
    level[src]=0;

	while(!Q.empty())
	{
		int u=Q.front();
		for(int i=0;i<edges[u].size();i++)
		{
			int v=edges[u][i];
			if(!visited[v])
			{
				level[v]=level[u]+1;
				visited[v]=true;
				Q.push(v);
			}
		}
		Q.pop();
	}

     return level[dest];
}

int main()
{
     //string fp="don't fuck";
     //cout<<fp<<endl;
    int test,x,y,source,dest;
    int edge,node,cnt=1;
    bool flag=false;

    scanf("%d",&test);

    while(test--)
    {
        memset(visited,false,sizeof(visited));
        memset(level,-1,sizeof(level));
        scanf("%d %d",&edge,&node);

        for(int i=1;i<=node;i++)
        {
            scanf("%ld",&cost[i]);
        }

        for(int i=1;i<=edge;i++)
        {
            scanf("%d %d",&x,&y);

            edges[x].push_back(y);
             edges[y].push_back(x);
        }

        scanf("%d %d",&source,&dest);

      long int ret=bfs(source,dest);
          if(ret==-1)
            printf("Case %d: Path not found\n",cnt++);
          else
          {
              ret=cost[dest]-ret;

              if(ret<=0)
                printf("Case %d: Don't travel\n",cnt++);
              else
               printf("Case %d: %ld\n",cnt++,ret);
          }

          memset(edges,0,sizeof(edges));
    }

    return 0;
}
