#include<bits/stdc++.h>
using namespace std;

map<char,int>arra;
vector<int>indx;

int main()
{

    int n,ptr;
    string input;
   bool flag;
    while(scanf("%d",&n)==1)
    {
       getchar();
        getline(cin,input);
        flag=false;
         ptr=n/4;
        for(int i=0;i<input.size();i++)
        {
            arra[input[i]]++;

             if(input[i]=='?')
                indx.push_back(i);
        }

          //for(int i=0;i<indx.size();i++)
            //cout<<indx[i]<<endl;

          int cnt=0;
         // cout<<arra['A']<<" "<<arra['G']<<" "<<arra['C']<<" "<<arra['T']<<endl;

        for(int i=1;i<=ptr-arra['A'] and cnt<indx.size();i++)
        {
           // cout<<'A';
            input[indx[cnt++]]='A';
        }
        for(int i=1;i<=ptr-arra['G'] and cnt<indx.size();i++)
        {
            // cout<<'G';
            input[indx[cnt++]]='G';

        }
        for(int i=1;i<=ptr-arra['C'] and cnt<indx.size();i++)
        {
            // cout<<'C';
            input[indx[cnt++]]='C';

        }
        for(int i=1;i<=ptr-arra['T'] and cnt<indx.size();i++)
        {
             //cout<<'T';
            input[indx[cnt++]]='T';
        }
           arra.clear();

          for(int i=0;i<input.size();i++)
        {
            arra[input[i]]++;

            if(input[i]=='?') flag=true;

        }

         if(arra['A']==arra['G'] and arra['C']==arra['T'] and !flag)
        cout<<input<<endl;
         else
            printf("===\n");

        indx.clear();
        arra.clear();
    }

    return 0;
}
