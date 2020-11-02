#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    string input;
    vector<int>arra;

    while(cin>>n)
    {

    cin>>input;


        char *temp=strdup(input.c_str());

         char *token=strtok(temp,"W");

         while(token!=NULL)
         {

            arra.push_back(strlen(token));

             token=strtok(NULL,"W");



         }

          cout<<arra.size()<<endl;
          if(arra.size())
          {
              cout<<arra[0];
          for(int i=1;i<arra.size();i++)
            cout<<" "<<arra[i];
          cout<<endl;

          }


           arra.clear();

    }

    return 0;
}
