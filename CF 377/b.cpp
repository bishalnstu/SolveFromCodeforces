#include<bits/stdc++.h>

using namespace std;

 int arra[1000000+5];

int main()
{

    int n,k,p1,p2,ans,temp;

    while(scanf("%d %d",&n,&k)==2)
    {
        ans=0;
         bool flag=false;

        for(int i=0;i<n;i++)
        {

            scanf("%d",&arra[i]);

        }

        if(n!=1)
        {
           for(int i=0;i<n-1;i++)
        {

            p1=arra[i];
            p2=arra[i+1];

            if(p1+p2<k)
            {
                 temp=(k-(p1+p2));

                 ans+=temp;

                 arra[i+1]+=temp;

            }


        }

        }
        else
        {
             printf("0\n");
             printf("%d\n",arra[0]);
             flag=true;

        }
         if(flag==false)
         {


             cout<<ans<<endl;

             printf("%d",arra[0]);
             for(int i=1;i<n;i++)
             printf(" %d",arra[i]);

             printf("\n");
         }

    }


    return 0;
}
