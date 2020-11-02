#include<bits/stdc++.h>

using namespace std;

int arra[100000+5];

int main()
{
    int n;

      scanf("%d",&n);

      for(int i=0;i<n;i++)
        scanf("%d",&arra[i]);

      sort(arra,arra+n);

      bool flag=false;


      for(int i=0;i<=n-3;i++)
      {
          if(arra[i]+arra[i+1]>arra[i+2])
          {
              flag=true;
              break;
          }
      }

      if(flag)
        printf("YES\n");
      else
        printf("NO\n");

    return 0;
}
