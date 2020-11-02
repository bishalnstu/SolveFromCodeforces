
#include<bits/stdc++.h>

using namespace std;

int arra[100000+5];
long long ans[100000+5];

int main()
{

   int tmp1,tmp2,len;
   map<char,int>mapp;
   string input;

   while(cin>>input)
   {

       if(input.size()%2)
       printf("-1\n");
       else
       {

           for(int i=0;i<input.size();i++)
           {
               if(input[i]=='L')
               {
                  mapp[input[i]]++;
               }
               else if(input[i]=='R')
               {
                    mapp[input[i]]++;
               }
               else if(input[i]=='U')
               {
                   mapp[input[i]]++;

               }
               else if(input[i]=='D')
               {
                  mapp[input[i]]++;

               }

           }

           if(mapp['L']==mapp['R'] and mapp['U']==mapp['D'])
            printf("0\n");
            else if(mapp['L']==mapp['R'] and mapp['U']!=mapp['D'])
           {
               tmp1=mapp['U'];
               tmp2=mapp['D'];

               len=abs(tmp1-tmp2);

               len=ceil(len/2);

               cout<<len<<endl;

           }
           else if(mapp['L']!=mapp['R'] and mapp['U']==mapp['D'])
           {
               tmp1=mapp['L'];
               tmp2=mapp['R'];

                 len=abs(tmp1-tmp2);

                 len=ceil(len/2);

                  cout<<len<<endl;
           }
           else
           {
              tmp1=mapp['L'];
               tmp2=mapp['R'];

              len=abs(tmp1-tmp2);

                tmp1=mapp['U'];
               tmp2=mapp['D'];

               len+=abs(tmp1-tmp2);

               len=ceil(len/2);
               cout<<len<<endl;

           }
       }

       mapp.clear();
   }

    return 0;
}

