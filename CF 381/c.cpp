#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,low,high;
     int arra[100000+5];

    arra[0]=-1;
    for(int i=0;i<100000;i++)
    arra[i+1]=i;

    while(scanf("%d %d",&n,&m)==2)
    {
        int minm=1000000000;
        for(int i=0;i<m;i++)
        {

            scanf("%d %d",&low,&high);

            if(high<minm)
                minm=high;

        }

        cout<<minm<<endl;

        for(int i=1;i<=n;i++)
            printf("%d ",arra[i]);

        printf("\n");

    }
    return 0;
}
