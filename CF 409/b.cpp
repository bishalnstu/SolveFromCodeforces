#include<bits/stdc++.h>

using namespace std;

int main()
{


     string x,y,z;

     getline(cin,x);
     getline(cin,y);

         z="";
      bool flag=false;

     for(int i=0;i<x.size();i++)
     {
           if(x[i]==y[i])
           {
               z+=x[i];
           }
           else if(x[i]<y[i])
            {
                flag=true;
                break;
            }
          else
            z+=y[i];
     }


         if(flag)
            printf("-1\n");
         else
            cout<<z<<endl;

    return 0;
}

