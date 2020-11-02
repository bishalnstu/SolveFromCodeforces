#include<bits/stdc++.h>

using namespace std;

int main()
{


 string input;
  int cnt;
   while(getline(cin,input))
   {
       int jump=0,maxm=0;

       for(int i=0;i<input.size();i++)
       {
             bool flag=false;

           while(input[i]!='A' and input[i]!='E' and input[i]!='I' and input[i]!='O' and input[i]!='U' and input[i]!='y' and i<input.size())
             {

                 i++;
                 flag=true;
             }
             if(!flag)
             if(input[i]=='A' or input[i]=='E' or input[i]=='I' or input[i]=='O' and input[i]=='U' and input[i]=='y')
             {

                 jump=i;

             }

             if(i-jump>maxm)
             {
                 maxm=i-jump;
                 jump=i;

             }


       }

        cout<<maxm<<endl;

   }


    return 0;
}
