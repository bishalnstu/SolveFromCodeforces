#include<bits/stdc++.h>

using namespace std;

map<string,bool>check;


int main()
{

    string input,temp,tmp,ans;

    while(cin>>input)
    {
        int cnt=0;
        temp="";
        check[input]=true;
        cnt++;

        for(int i=input.size()-1;i>0;i--)
        {
            temp=input[i]+temp;
            tmp=input.substr(0,i);
            ans=temp+tmp;

            if(!check[ans])
            {
                cnt++;
                check[ans]=true;
            }
        }

         printf("%d\n",cnt);

       check.clear();

    }


    return 0;
}
