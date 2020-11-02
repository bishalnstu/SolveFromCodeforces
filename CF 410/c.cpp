#include<bits/stdc++.h>

using namespace std;


vector<long long>arra;
vector<int>indx;
int main()
{

     int n;
     long long input,ret,x,y,keep;
     bool flag=false,check;

     while(scanf("%d",&n)==1)
     {
         flag=false;

      for(int i=0;i<n;i++)
      {
          scanf("%I64d",&input);
          arra.push_back(input);

          if(input%2)
               indx.push_back(i);

                if(i==0)
                    keep=input;

               if(i>0)
               {
                   keep=__gcd(arra[i],keep);

                   if(keep==1)
                    flag=true;
               }
      }

        int ptr=0;

       for(int i=0;i<indx.size() and indx[i]!=n-1;i++)
        {

             if(arra[indx[i]]%2)
             {
                 ret=arra[indx[i]]+arra[indx[i]+1];

            if(ret%2)
            {
                x=arra[indx[i]]-arra[indx[i]+1];
                y=arra[indx[i]]+arra[indx[i]+1];

                arra[indx[i]]=x;
                arra[indx[i]+1]=y;

                 x=arra[indx[i]]-arra[indx[i]+1];
                 y=arra[indx[i]]+arra[indx[i]+1];

                arra[indx[i]]=x;
                arra[indx[i]+1]=y;

                ptr+=2;
            }
            else if(arra[indx[i]]%2 and arra[indx[i]+1]%2)
            {
                x=arra[indx[i]]-arra[indx[i]+1];
                y=arra[indx[i]]+arra[indx[i]+1];

                arra[indx[i]]=x;
                arra[indx[i]+1]=y;

                ptr++;

            }

             }


        }

               if(arra[n-1]%2)
                ptr+=2;


           printf("YES\n");
           if(flag)
            printf("%d\n",ptr);
            else
              printf("0\n");

        arra.clear();
        indx.clear();
     }

    return 0;
}
