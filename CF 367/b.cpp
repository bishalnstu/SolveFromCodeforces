#include<bits/stdc++.h>

using namespace std;

  int n;
   vector<int>arra;

int bsearch(int key)
{
      int indx,mid;
     int first=0,last=n-1;
    while(first<=last)
        {
         mid=(first+last)/2;

       if(arra[mid]==key)
         {
             indx=mid;

             while(arra[indx]==key)
             {
                 indx++;
             }
             indx--;
             break;
         }
         else if(arra[mid]<key)
         {
             first=mid+1;
             indx=mid;
         }
         else
         {
             last=mid-1;
             indx=mid;
         }

         }

    return indx;
}

int main()
{

       int query,capital,input;
        vector<int>result;
     while(scanf("%d",&n)==1)
       {
           for(int i=0;i<n;i++)
           {
               scanf("%d",&input);
               arra.push_back(input);
           }

             sort(arra.begin(),arra.end());

          scanf("%d",&query);

          for(int i=0;i<query;i++)
          {

              scanf("%d",&capital);

               if(capital>=arra[n-1])
                result.push_back(n);
               else
               {
                   int ans=bsearch(capital);

              if(arra[ans]>capital)
              {
                ans--;
              }

                ans++;

               result.push_back(ans);

               }

          }


          for(int i=0;i<result.size();i++)
             {
                 printf("%d\n",result[i]);

             }
          result.clear();
          arra.clear();
       }
    return 0;
}
