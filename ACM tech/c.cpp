#include<bits/stdc++.h>

using namespace std;

int main()
{

    string input;

    int cnt,maxm,x,y,tmp;
     bool flag;

    while(cin>>input)
    {
        flag=false;
           maxm=0;
        for(int i=0;i<input.size();i++)
        {
            cnt=0;
            tmp=i;
            while(input[i]!='a' and i<input.size())
            {
                i++;
                cnt++;

            }

           if(cnt>maxm)
           {

               maxm=cnt;
               x=tmp;
               y=i-1;
              flag=true;
               break;
           }

        }

        if(!flag)
         {

                input[input.size()-1]='z';
         }
        else
       for(int i=x;i<=y;i++)
       {

           input[i]=input[i]-1;

       }

       cout<<input<<endl;

    }


    return 0;
}
