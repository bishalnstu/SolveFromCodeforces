#include<bits/stdc++.h>

using namespace std;


int succeess,unsuccess;
bool cal(int p,int s)
{
    int tmp;

    tmp =(s / 50) % 475 ;

    for(int i=1;i<=25;i++)
    {

         tmp = ((tmp * 96) + 42) % 475 ;

         if(tmp+26==p)
            return true;
    }

    return false;

}


bool findcal(int check,int x)
{
    succeess=0;

    if(check>x)
    {

        while(x<check)
        {

            x+=100;
            succeess++;

            if(x==check)
                return true;
        }

        if((x-50)==check)
        {
            unsuccess++;
            return true;
        }
         else
            return false;
    }
    else
    {

        while(x>check)
        {

            x-=50;

            if(x==check)
                return true;
        }

    }

    return false;
}

int main()
{

     int p,x,y,ans,temp;


    while(scanf("%d %d %d",&p,&x,&y)==3)
     {

           ans=0;
           succeess=0;

        if(cal(p,x))
          printf("%d\n",succeess);
        else
        {

            for(int i=y; ;i++)
            {

                if(cal(p,i))
                 {
                    ans=i;

                     bool ret=findcal(ans,x);

                     if(ret)
                     {
                       printf("%d\n",succeess);
                       break;
                     }

                 }

            }

        }


     }
    return 0;
}
