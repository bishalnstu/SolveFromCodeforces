#include<bits/stdc++.h>
using namespace std;

int main()
{

   int n,ptr;
   string input,ans;

    while(cin>>n)
{

    getchar();

    getline(cin,input);

    for(int i=0;i<input.size();i++)
    {

        if(!input.compare(i,3,"ogo"))
        {

            ptr=i+3;

            while(!input.compare(ptr,2,"go"))
            {

                ptr+=2;


            }

            ans+="***";

            i=ptr-1;
        }
        else
            ans+=input[i];

    }

    cout<<ans<<endl;

    ans="";

}
    return 0;
}
