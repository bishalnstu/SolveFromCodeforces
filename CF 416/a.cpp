#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long a,b,turn;


    while(scanf("%I64d %I64d",&a,&b)==2)
     {
         turn=1;

         while(1)
         {

             if(a<turn)
             {
                 printf("Vladik\n");
                 break;
             }
             else
             {
                 a-=turn;

             }

             turn++;

             if(b<turn)
             {
                 printf("Valera\n");
                 break;
             }
             else
             {
                 b-=turn;

             }

             turn++;

         }


     }
    return 0;
}
