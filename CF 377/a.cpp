#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k,n;
     long long temp;
    while(scanf("%d %d",&k,&n)==2)
    {
        bool flag=false;
        int i;

        for(i=1; ;i++)
        {
           temp=k*i;

            if(temp%10==0 || temp%10==n)
            {

                cout<<i<<endl;
                break;
            }



        }


    }


    return 0;
}
