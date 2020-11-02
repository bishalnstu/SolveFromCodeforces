
#include<bits/stdc++.h>

using namespace std;

int main()
{

     int n,t,k,d,temp,time2,time1,ptr,ans,tmp;


     while(scanf("%d %d %d %d",&n,&t,&k,&d)==4)
      {
          time1=0;
          time2=0;
          temp=0;
          tmp=0;

          for(int i=1; ;i++)
          {

             if(i%t==0)
              {
                  tmp+=k;
              }

              if(tmp>=n)
                {
                    time1=i;
                    break;
                }

          }

          for(int i=1; ;i++)
          {

               if(i%t==0)
                {
                    temp+=k;
                }

                if(temp>=n)
                {
                    ans=i;
                    break;
                }


                if(i==d)
                {
                    ptr=0;

                }

                if(ptr==t)
                {
                    temp+=k;
                    ptr=0;
                }

                if(temp>=n)
                {
                    ans=i;
                    break;
                }

                if(i>=d)
                {
                    ptr++;
                }


          }

         if(time1>ans)
            printf("YES\n");
         else
            printf("NO\n");


      }


    return 0;
}
