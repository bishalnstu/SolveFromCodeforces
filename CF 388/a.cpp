#include<bits/stdc++.h>

using namespace std;

vector<int>arra;

int main()
{

   int n;

   while(scanf("%d",&n)==1)
   {

           if(n%2!=0)
           {
              while((n-2)>=2)
             {

             arra.push_back(2);

             n=n-2;
             }
            arra.push_back(n);

           }
         else
         {
            while(n/2!=1)
            {

             arra.push_back(2);

             n=n-2;

            }

            arra.push_back(2);

         }
       cout<<arra.size()<<endl;

        for( int i = 0; i <arra.size(); i++ )
        printf("%d ",arra[i]);

        printf("\n");
       arra.clear();

   }

    return 0;
}
