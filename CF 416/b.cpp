#include<bits/stdc++.h>

using namespace std;

vector<int>arra,a;

int main()
{

    int n,m,input,l,r,x;


    while(scanf("%d %d",&n,&m)==2)
    {

        for(int i=0;i<n;i++)
        {

            scanf("%d",&input);
            arra.push_back(input);
        }

        while(m--)
        {
            scanf("%d %d %d",&l,&r,&x);

             int low=0,high=0;

             for(int i=l-1;i<r;i++)
              {
                  if(arra[i]<arra[x-1])
                    low++;
                  else if(arra[i]>arra[x-1])
                    high++;
              }

              if(r-l==0)
                printf("Yes\n");
              else if(low==high and ((l+r)/2)==x)
                printf("Yes\n");
              else if(low==0 and x==l)
              printf("Yes\n");
               else if(high==0 and x==r)
              printf("Yes\n");
              else if(low==(x-l))
                printf("Yes\n");
               else if(high==(r-x))
                printf("Yes\n");
              else
                printf("No\n");
        }


         arra.clear();

    }



    return 0;
}

