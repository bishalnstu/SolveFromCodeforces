#include<bits/stdc++.h>

using namespace std;

map<char ,int> mapp;

int main()
{
   char temp;
    int cnt=1,ptr,diff1,diff2;
    string input;

     for(int i=97;i<=122;i++)
     {

         temp=(char)i;

        mapp[temp]=cnt++;

     }

    while(cin>>input)
    {

          ptr=1;

     int sum=0;

     for(int i=0;i<input.size();i++)
     {

         temp=input[i];


         diff1=abs(ptr-mapp[temp]);
         diff2=26-diff1;

         if(diff1<diff2)
         {

             sum+=diff1;


         }
         else
         {
             sum+=diff2;


         }

          ptr=mapp[temp];


     }

       cout<<sum<<endl;


    }


    return 0;
}
