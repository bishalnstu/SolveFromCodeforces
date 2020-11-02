#include<bits/stdc++.h>

using namespace std;

int arra[100000+5];
 map<int,bool>check;

int main()
{

     int n,varient,maxm,minm,mid;

   while(cin>>n)
{
    varient=0;
    maxm=-1;
    minm=1000000005;
    mid=0;
    for(int i=0;i<n;i++)
    {

        scanf("%d",&arra[i]);

        if(!check[arra[i]])
        {

           varient++;
            check[arra[i]]=true;
        }

        if(arra[i]>maxm)
        {
            maxm=arra[i];

        }
        if(arra[i]<minm)
        {

            minm=arra[i];
        }


    }


      if(varient>3)
        printf("NO\n");
      else if(varient<3)
      {
           printf("YES\n");

      }
      else
      {
          for(int i=0;i<n;i++)
          {

               if(arra[i]!=maxm and arra[i]!=minm)
               {
                   mid=arra[i];
                   break;
               }

          }

        if(abs(maxm-mid)==abs(mid-minm))
           {
               printf("YES\n");

           }
           else
            printf("NO\n");

      }
    check.clear();
}

    return 0;
}

