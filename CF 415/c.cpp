#include<bits/stdc++.h>

using namespace std;

vector<int>arra;

void printPowerSet(int *set, int set_size)
{

    unsigned int pow_set_size = pow(2, set_size);
    int counter, j;

    for(counter = 0; counter < pow_set_size; counter++)
    {
      for(j = 0; j < set_size; j++)
       {

          if(counter & (1<<j))
            printf("%d", set[j]);
       }
       printf("\n");
    }
}


int main()
{

    int n,input;
     long long mod=1000000007;

    while(scanf("%d",&n)==1)
     {
         for(int i=0;i<n;i++)
         {

             scanf("%d",&input);

             arra.push_back(input);
         }

         long long ans=0LL;

         for(int i=0;i<n-1;i++)
         {
             for(int j=i+1;j<n;j++)
             {


                 ans+=abs(arra[j]-arra[i])%mod;

             }
         }

         printf("%I64d\n",ans);

         arra.clear();

     }

    return 0;
}
