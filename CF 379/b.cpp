
#include<bits/stdc++.h>

using namespace std;
map<int,int>mapp;

int main()
{
    int two,three,five,six,minm;
    long long sum;
    while(scanf("%d %d %d %d",&two,&three,&five,&six)==4)
    {
        sum=0;

       minm=min(min(two,five),six);

       sum=256*minm;

       two=two-minm;

       minm=min(two,three);

       sum+=(minm*32);

       cout<<sum<<endl;
    }
    return 0;
}
