#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,k,green,black,step,G,B,rem,remainder,cnt;

    string ans;

    while(scanf("%d %d %d %d",&n,&k,&green,&black)==4)
    {
          ans="";

          if(max(green,black)<k)
            {
               for(int i=1;i<=black;i++)
                   ans+="B";
                  for(int i=1;i<=green;i++)
                   ans+="G";

                cout<<ans<<endl;
            }
            else
            {
                if(green<black)
        {

            if(k!=1)
            {
               step=black/k;
                rem=black%k;
                 if(rem==0 and step!=1)
                step--;
                remainder=green%step;
               step=green/step;
            }
            else
            step=1;

                 if(step==0 and rem==0 and (black/k)-green==1)
                    step=1;

              if(step==0 and k!=black)
            {
                printf("NO\n");

            }
            else
            {

            G=green;
            B=black;

            while(B>=k and G>=step)
            {
                for(int i=1;i<=k;i++)
                   ans+="B";

                   B-=k;

                  for(int i=1;i<=step;i++)
                   ans+="G";

                    G-=step;

                    cnt=step+1;
                   if(remainder>=1)
                   {
                      for( ;cnt<=k and remainder>0;cnt++)
                      {
                          ans+="G";
                          remainder--;
                           G--;
                      }

                   }

            }

            if(G>k or B>k)
                 printf("NO\n");
             else
             {
                while(B)
               {
                ans+="B";
                B--;
               }
             while(G)
              {
                ans+="G";
                G--;
              }

               cout<<ans<<endl;
             }


            }
        }
        else
        {
          if(k!=1)
            {
               step=green/k;
               rem=green%k;
               if(rem==0 and step!=1)
                step--;
               remainder=black%step;
               step=black/step;
            }
            else
            step=1;

             if(step==0 and rem==0 and (green/k)-black==1)
             step=1;

            if(step==0 and k!=green)
            {
                printf("NO\n");

            }
            else
            {
                G=green;
                B=black;

            while(G>=k and B>=step)
            {
                for(int i=1;i<=k;i++)
                   ans+="G";

                   G-=k;

                  for(int i=1;i<=step;i++)
                   ans+="B";

                   B-=step;

                   cnt=step+1;

                   if(remainder>0)
                   {
                       for( ;cnt<=k and remainder>0;cnt++)
                       {
                           ans+="B";
                          remainder--;
                           B--;
                       }

                   }
            }

             if(G>k or B>k)
                 printf("NO\n");
             else
             {
                while(G)
            {
                ans+="G";
                G--;
            }
             while(B)
            {
                ans+="B";
                B--;
            }

             cout<<ans<<endl;

             }

            }

        }


            }


    }
    return 0;
}
