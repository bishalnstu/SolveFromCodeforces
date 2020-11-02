#include<bits/stdc++.h>

using namespace std;


int main()
{
    int a,b,c,tmp1,tmp2;
    int x,y;
    bool flag;

    while(scanf("%d %d",&x,&y)==2)
    {
        flag=false;
        a=y,b=y,c=y;
        int cnt=0;
        while(!flag)
        {
           for(int i=1;i<=3;i++)
           {
               if(i==1 and a!=x)
               {
                   tmp1=max(a,b);
                   tmp1=min(tmp1,c);

                   tmp2=max(max(a,b),c);
                   tmp2=tmp1+tmp2;
                   tmp2--;

                   if(tmp2>=x)
                   {
                       a=x;
                   }
                   else
                   {
                       a=tmp2;
                   }

                   cnt++;
               }
               else if(i==2 and b!=x)
               {
                   tmp1=max(a,b);
                   tmp1=min(tmp1,c);

                   tmp2=max(max(a,b),c);
                   tmp2=tmp1+tmp2;
                   tmp2--;

                   if(tmp2>=x)
                   {
                       b=x;
                   }
                   else
                   {
                       b=tmp2;
                   }
                    cnt++;
               }
               else if(i==3 and c!=x)
               {

                   tmp1=min(a,b);
                   tmp1=max(tmp1,c);

                   tmp2=max(max(a,b),c);
                   tmp2=tmp1+tmp2;
                   tmp2--;

                   if(tmp2>=x)
                   {
                       c=x;
                   }
                   else
                   {
                       c=tmp2;
                   }
                    cnt++;
               }

              if(a==x and b==x and c==x)
                {
                    flag=true;
                }

           }


           if(a==x and b==x and c==x)
           {

               flag=true;
               break;
           }
        }

         cout<<cnt<<endl;
    }
    return 0;
}
