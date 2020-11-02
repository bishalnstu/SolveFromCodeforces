#include<bits/stdc++.h>

using namespace std;

int main()
{

    int arra[100000];
    int n,c;

    while(scanf("%d %d",&n,&c)==2)
    {
        int cnt=0;

        for(int i=0;i<n;i++)
            cin>>arra[i];


        for(int i=0;i<n-1;i++)
        {

            if(arra[i+1]-arra[i]<=c)
            {

                cnt++;

            }
            else
                cnt=0;

        }

        cout<<cnt+1<<endl;
    }

    return 0;
}
