
#include<bits/stdc++.h>

using namespace std;

int arra[100000+5];
int ans[100000+5];

int main()
{

    int n;
    int tmp1,tmp2,tmp;
    arra[0]=0;
    ans[0]=0;

    while(scanf("%d",&n)==1)
    {

        for(int i=1;i<=n;i++)
            scanf("%d",&arra[i]);

           ans[n]=arra[n];

           int cnt=1;
           tmp1=0;
           tmp2=0;

        for(int i=n;i>1;i--)
        {

            if(cnt%2)
             {
                 tmp1+=ans[i];

             }
             else
             {
                 tmp2-=ans[i];
             }

             tmp=tmp1+tmp2;

              if(cnt%2)
             ans[i-1]=arra[i-1]+tmp;
               else
                ans[i-1]=arra[i-1]-tmp;

             cnt++;

        }

        for(int i=1;i<=n;i++)
          printf("%d ",ans[i]);

        printf("\n");

    }

    return 0;
}
