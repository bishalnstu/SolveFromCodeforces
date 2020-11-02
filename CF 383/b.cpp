#include<bits/stdc++.h>

using namespace std;

int flag[1234567];
int arra[1234567];

long long xorCount(int n, int x)
{
    long long result = 0;
   int temp;
    for (int i=1 ; i<=n ; i++)
    {
         flag[arra[i]]--;
        temp=(x^arra[i]);
        result+=flag[temp];

    }

    return result;
}

int main()
{

  int n,x;
  long long cnt;

   while(scanf("%d %d",&n,&x)==2)
{

    for(int i=1;i<=n;i++)
    {

        scanf("%d",&arra[i]);

        flag[arra[i]]++;
    }

    cnt=xorCount(n,x);

     cout<<cnt<<endl;

     memset(flag,0,sizeof(flag));
}

    return 0;
}
