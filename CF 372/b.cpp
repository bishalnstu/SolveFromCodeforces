#include<bits/stdc++.h>
using namespace std;

int main()
{

    char t;

    string input;
    map<char,bool>check,aux;
     bool flag;
    while(cin>>input)
    {

     for(int i=0;i<input.size();i++)
     {
         int len=0;
         string ans;
        flag=false;
         check.clear();
         aux.clear();
         string temp;
         temp=input.substr(i,26);

          if(temp.size()<26)
            break;
          else
          {
              for(int k=0;k<temp.size();k++)
              {

                  if(isalpha(temp[k]))
                  {
                      aux[temp[k]]=true;
                  }

              }


          }
       for(int j=0;j<temp.size();j++)
       {

           if(temp[j]=='?')
           {
               for(int k=65;k<=90;k++)
               {
                   t=k;

                   if(aux[t]==false)
                   {

                       temp[j]=t;
                       aux[t]=true;
                       break;
                   }

               }

           }
           if(check[temp[j]]==0)
           {

               check[temp[j]]=1;
               ans+=temp[j];

               len++;
               if(len==26)
               {
                   flag=true;
                    break;
               }

           }
           else
           {

               break;

           }

       }


          if(len==26 || flag)
          {
                 input.replace(i,26,ans);
                replace(input.begin(),input.end(),'?','A');

               cout<<input<<endl;
              break;
          }

     }

     if(!flag)
        cout<<"-1"<<endl;

    }

    return 0;
}
