#include<bits/stdc++.h>

using namespace std;

map<pair<char,char>,bool>mapp;
vector<pair<char,char> >arra;
pair<char,char>temp,tmp;
map<char,int>check;

int main()
{
    char a,b,x,y;
    string patren,input;
    bool flag=false;
    int cnt=0,knt=0;

    getline(cin,patren);
    getline(cin,input);


    for(int i=0;i<patren.size();i++)
    {

     a=input[i];
     b=patren[i];

     temp.first=a;
     temp.second=b;

    x=patren[i];
    y=input[i];

    tmp.first=x;
    tmp.second=y;

        if(a!=b)
        {
            if(!mapp[temp] and !mapp[tmp])
            {
                cnt++;
                arra.push_back(temp);
                 check[a]++;
                 check[b]++;
                 if(check[a]>1 or check[b]>1)
                 {
                     flag=true;
                     break;
                 }
            mapp[temp]=true;
             mapp[tmp]=true;
            }

             input[i]=patren[i];

        }

    }

        if(!flag and input==patren)
        {
            cout<<cnt<<endl;
          for(int i=0;i<arra.size();i++)
            cout<<arra[i].first<<" "<<arra[i].second<<endl;
        }
        else
        {
            printf("-1\n");
        }


    return 0;
}
