
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,day;
    string input,tmp;

    while(getline(cin,input))
    {
        stringstream sso;

        sso<<input;

        sso>>day;

        sso>>tmp;
        sso>>tmp;

        if(tmp=="week")
        {
            if(day==5 or day==6)
           printf("53\n");
           else
            printf("52\n");
        }
        else
        {
             if(day>30)
               printf("7\n");
             else if(day<30)
                printf("12\n");
             else
                printf("11\n");
        }

    }
    return 0;
}
