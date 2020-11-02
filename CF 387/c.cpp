#include<bits/stdc++.h>

using namespace std;

vector<int>ans;

int serverutilize[100+1];

int main()
{

     int server,task,start,need,duration,availableserver,ptr,last,cnt,temp,kount;

     while(scanf("%d %d",&server,&task)==2)
      {
              availableserver=server;

                     for(int i=1;i<=server;i++)
                     {
                        serverutilize[i]=-1;
                     }

          for(int i=0;i<task;i++)
          {

              scanf("%d %d %d",&start,&need,&duration);

                temp=0,cnt=1;
                last=(start+duration-1);

                for(int j=1;j<=server;j++)
                {
                   if(start>serverutilize[j] and serverutilize[j]!=-1)
                   {
                       serverutilize[j]=-1;
                        availableserver++;
                   }

                }

                if(availableserver>=need)
                {
                    for(int j=1;j<=server;j++)
                  {
                      if(serverutilize[j]==-1)
                      {
                          if(cnt<=need)
                          {
                              temp+=j;
                              serverutilize[j]=last;
                              cnt++;
                          }

                      }

                  }
                  ans.push_back(temp);
                  availableserver=availableserver-need;
                }
              else
                 ans.push_back(-1);
          }

          for(int i=0;i<ans.size();i++)
            {
                printf("%d\n",ans[i]);
            }

            ans.clear();
      }
    return 0;
}
