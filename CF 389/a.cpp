#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,m,k,temp,col,row,pos;

    while(scanf("%d %d %d",&n,&m,&k)==3)
    {
        temp=m*2;

        col=(k/temp);
        k=k%temp;

          if(k==0)
          {
        printf("%d %d R\n",col,m);
          }
          else
          {

             row=k/2;


        pos=k%2;

        if(pos==0)
        {
           printf("%d %d R\n",col+1,row);
        }
        else
        {
          printf("%d %d L\n",col+1,row+1);
        }
          }

    }

    return 0;
}
