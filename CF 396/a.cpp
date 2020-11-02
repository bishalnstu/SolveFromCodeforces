#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a,b;


    getline(cin,a);
    getline(cin,b);

    if(a==b)
        printf("-1\n");
    else
    {

        if(a.size()>=b.size())
        {
            printf("%d\n",a.size());
        }
        else
        printf("%d\n",b.size());
    }
    return 0;
}
