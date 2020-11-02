#include<bits/stdc++.h>

using namespace std;

char temp[2000+5];
int main()
{

    int n,mid,cnt;
    string input;

    while(scanf("%d",&n)==1)
    {
           cnt=0;
           getchar();
        getline(cin,input);

        if(n%2==0)
        {
            mid=n/2;
        }
        else
            mid=n/2+1;

          temp[mid-1]=input[cnt++];

        if(n%2!=0)
        {
             for(int i=1;i<=n;i++)
        {
               if(mid-i>0)
               temp[mid-i-1]=input[cnt++];
               if(mid+i<=n)
                temp[mid+i-1]=input[cnt++];

              if(mid-i<=0 or mid+i>=n)
                break;
        }

        }
        else
        {
             for(int i=1;i<=n;i++)
        {
               if(mid-i>=0)
                temp[mid+i-1]=input[cnt++];
               if(mid+i<n)
                temp[mid-i-1]=input[cnt++];

              if(mid-i<=0 or mid+i>=n)
                break;
        }


        }

        for(int i=0;i<n;i++)
            printf("%c",temp[i]);
        printf("\n");
    }

    return 0;
}
