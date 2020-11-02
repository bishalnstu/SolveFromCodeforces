#include<bits/stdc++.h>
using namespace std;

vector<int>arra,tmp;

int main()
{
     int n,input,toprint,ptr,temp;

     while(scanf("%d",&n)==1)
    {
        toprint=n;

        for(int i=0;i<n;i++)
        {
            scanf("%d",&input);

            if(input==toprint)
            {
                arra.push_back(input);

                sort(arra.begin(),arra.end());

                   ptr=0;

                for(int j=arra.size()-1;j>=0;j--)
                {
                      if(arra[j]==toprint)
                      {
                          printf("%d ",arra[j]);
                          arra.pop_back();
                          toprint--;
                      }
                      else
                        break;

                }

                printf("\n");
            }
            else
            {
                arra.push_back(input);
                printf("\n");
            }
        }

        arra.clear();
    }
    return 0;
}
