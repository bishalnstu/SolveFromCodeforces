
#include<bits/stdc++.h>
using namespace std;

int main()
{

    bool odd,even;
    int n,k,target,loc,tmp;
    string input;

    while(scanf("%d %d",&n,&k)==2)
{

     getchar();

    getline(cin,input);

    for(int i=0;i<n;i++)
    {

        if(input[i]=='T')
           target=i;

        if(input[i]=='G')
           loc=i;

    }

     bool flag=false,check=false;

     if(target>loc)
     {

         for(int i=loc;i<=target;i+=k)
         {

             if(input[i]=='#')
             {
                 flag=true;
                 break;

             }
             if(input[i]=='T')
              {

                  check=true;

              }

         }

         if(!flag and check)
            cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;

     }
      else
      {

          for(int i=loc;i>=target;i-=k)
         {

             if(input[i]=='#')
             {
                 flag=true;
                 break;

             }
             if(input[i]=='T')
              {

                  check=true;

              }

         }

         if(!flag and check)
            cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;


      }

}
    return 0;
}
