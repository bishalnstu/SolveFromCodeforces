#include<bits/stdc++.h>

using namespace std;


vector<long long>arra;

int main()
{


   int n,k;

    long long input;
   bool flag=false;

  long long minm=1000000000+5;

   while(scanf("%d %d",&n,&k)==2)
   {
       flag=false;

      for(int i=0;i<n;i++)
       {

           scanf("%I64d",&input);
           arra.push_back(input);

           if(input<minm)
           {
               minm=input;

           }

       }

       long long ans=0,temp;

       for(int i=0;i<n;i++)
       {

           if(arra[i]!=minm)
           {

              temp=arra[i]-minm;

                if(temp%k!=0)
                    flag=true;

               temp=temp/k;

               ans+=temp;
           }
       }

       if(flag==false)
        printf("%I64d\n",ans);
       else if(n==1)
        printf("0\n");
       else
        printf("-1\n");


          arra.clear();
   }

    return 0;
}
