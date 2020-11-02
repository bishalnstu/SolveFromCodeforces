#include<bits/stdc++.h>

using namespace std;

vector<int>ans;
vector<int>temp;
set<int> a[4],b[4];

int main()
{


    int n,inpt,m,x,y;
     bool flag;
     int input;

    while(scanf("%d",&n)==1)
      {

          for(int i=0;i<n;i++)
          {
              scanf("%d",&input);
              temp.push_back(input);

          }

          for(int i=0;i<n;i++)
           {
              scanf("%d",&inpt);
              a[inpt].insert(temp[i]);
           }

           for(int i=0;i<n;i++)
           {
              scanf("%d",&inpt);
              b[inpt].insert(temp[i]);
           }

             scanf("%d",&m);

             for(int i=0;i<m;i++)
             {

                 scanf("%d",&inpt);

                    flag=false;

                   if(a[inpt].empty() and b[inpt].empty())
                    ans.push_back(-1);
                    else
                    {

                        if(a[inpt].empty())
                        x= *b[inpt].begin();
                        else if(b[inpt].empty())
                         x= *a[inpt].begin();
                        else if(*a[inpt].begin()<*b[inpt].begin())
                        {
                            x=*a[inpt].begin();
                        }
                        else
                           x=*b[inpt].begin();

                           ans.push_back(x);

                            for(int i=1;i<=3;i++)
                           {
                            a[i].erase(x);
                           b[i].erase(x);
                           }

                    }

             }

             printf("%d",ans[0]);

             for(int i=1;i<ans.size();i++)
                printf(" %d",ans[i]);

              printf("\n");

              ans.clear();
              temp.clear();

      }
    return 0;
}

