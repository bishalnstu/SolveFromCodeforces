#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,rem,arra[200000+5],temp;
    bool cp,flag;

    while(cin>>n)
    {
       flag=false;
        cp=false;
        for(int i=0;i<n;i++)
        {

            scanf("%d",&arra[i]);

            temp=arra[i];

                if(cp)
                {
                    if(temp==0)
                   flag=true;
                    else{

                        temp-=1;
                       cp=false;
                    }

                }

                if(temp==1)
                {

                   cp=true;

                }
                else if(temp>=2)
                {

                    if(temp%2)
                        cp=true;

                }

        }

     if(flag==true)
         printf("NO\n");

     else if(cp==false)
     {

         printf("YES\n");
     }
     else
        printf("NO\n");

    }


    return 0;
}
