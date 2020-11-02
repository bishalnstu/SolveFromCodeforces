#include<bits/stdc++.h>

using namespace std;

map<int,bool>check;

int main()
{

  int n,m,k;

  while(scanf("%d %d %d",&n,&m,&k)==3)
  {
      for(int i=1; ;i++)
      {

          int temp=m*i;

          if(temp>k)
            break;

          check[temp]=true;
      }

      int cnt=0;

      for(int i=1;;i++)
      {
          int temp=n*i;
          if(temp>k)
            break;

          if(check[temp])
                cnt++;
      }

      printf("%d\n",cnt);

      check.clear();
  }

    return 0;
}
