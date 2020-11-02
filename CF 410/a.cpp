#include<bits/stdc++.h>

using namespace std;

int main()
{

     string input;

     int mid,diff;

     while(cin>>input)
     {

         if(input.size()%2==0)
         {
             mid=input.size()/2;

             diff=0;

             for(int i=mid-1,j=mid;i>=0 and j<input.size();i--,j++)
              {
                  if(input[i]!=input[j])
                   diff++;
              }
         }
         else
         {
             mid=input.size()/2;

             diff=0;

             for(int i=mid-1,j=mid+1;i>=0 and j<input.size();i--,j++)
              {
                  if(input[i]!=input[j])
                   diff++;
              }


         }

         if(diff==0 and input.size()%2==1)
            printf("YES\n");
         else if(diff==1 or input.size()==1)
            printf("YES\n");
         else
            printf("NO\n");
     }

    return 0;
}
