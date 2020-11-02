#include<bits/stdc++.h>

using namespace std;

int main()
{

    bool flag;
    map<int,pair<string,string> >arra;
   string input,a,b;
    int n,indx;

    while(cin>>n)
    {
         getchar();
         flag=false;
        for(int i=0;i<n;i++)
        {

           getline(cin,input);
            a=input.substr(0,2);
            b=input.substr(3,2);


             if((a=="OO" or b=="OO") and !flag)
             {
                 indx=i;

                 flag=true;
             }
            arra[i].first=a;
            arra[i].second=b;

        }

        if(flag)
        {
            if(arra[indx].first=="OO")
            {
               arra[indx].first="++";
            }
            else
            {
                arra[indx].second="++";
            }
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
            {

                cout<<arra[i].first<<"|"<<arra[i].second<<endl;

            }

        }
        else
            printf("NO\n");


           arra.clear();
    }

    return 0;
}
