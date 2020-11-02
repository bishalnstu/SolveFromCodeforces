#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    char token;
    bool flag;
    while(scanf("%d %d",&n,&m)==2)
    {
        flag=false;

        for(int i=0;i<n;i++)
        {

            for(int j=0;j<m;j++)
            {

                cin>>token;

                if(token=='C' or token=='M' or token=='Y')
                    flag=true;
            }

        }

        if(flag)
        {
            printf("#Color\n");

        }
        else
            printf("#Black&White\n");

    }

    return 0;
}
