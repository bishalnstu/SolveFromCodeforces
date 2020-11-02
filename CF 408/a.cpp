#include<bits/stdc++.h>

using namespace std;

vector<int>arra;

int main()
{


   int n,m,k,temp;


   while(scanf("%d %d %d",&n,&m,&k)==3)
    {

        for(int i=0;i<n;i++)
        {

            scanf("%d",&temp);

            arra.push_back(temp);

        }

        int p=1000,q=1000;

        for(int i=m-2;i>=0;i--)
        {
            if(arra[i]<=k and arra[i]!=0)
            {
                p=i+1;
                break;
            }

        }

        for(int i=m;i<n;i++)
           {

               if(arra[i]<=k and arra[i]!=0)
               {

                   q=i+1;
                   break;
               }

           }


           if(abs(m-p)<abs(m-q))
           {

               printf("%d\n",abs(m-p)*10);

           }
           else
            printf("%d\n",abs(m-q)*10);

           arra.clear();
    }
    return 0;
}
