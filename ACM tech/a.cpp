#include<bits/stdc++.h>

using namespace std;

int main()
{

   int n,b,d,input,sum,cnt;

   while(scanf("%d %d %d",&n,&b,&d)==3)
{
    sum=0,cnt=0;

    for(int i=0;i<n;i++)
    {

        scanf("%d",&input);

        if(input<=b)
        {
           sum+=input;


        }

        if(sum>d)
        {

            cnt++;
            sum=0;

        }
    }

    cout<<cnt<<endl;

}

    return 0;
}
