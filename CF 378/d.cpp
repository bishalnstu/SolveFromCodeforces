
#include<bits/stdc++.h>

using namespace std;

int main()
{

 vector<int>arra;
 string input;
  int cnt,ptr,len;

   while(getline(cin,input))
   {
              len=0,ptr=0;
             //if(input[0]!='A' and input[0]!='E' and input[0]!='I' and input[0]!='O' and input[0]!='U' and input[0]!='y')
                arra.push_back(0);

          for(int i=0;i<input.size();i++)
          {

            if(input[i]=='A' or input[i]=='E' or input[i]=='I' or input[i]=='O' or input[i]=='U' or input[i]=='Y')
             {

                arra.push_back(i+1);

             }


          }
            arra.push_back(input.size()+1);

          for(int i=0;i<arra.size()-1;i++)
          {

              if(arra[i+1]-arra[i]>len)
              {

                  len=arra[i+1]-arra[i];
              }

          }

          cout<<len<<endl;

          arra.clear();

   }


    return 0;
}
