#include<bits/stdc++.h>

using namespace std;

vector<pair<int,int> > arra;
pair<int,int>temp;


bool compare(const pair<int ,int>&a, const pair<int,int>&b)
{

    return a.first < b.first;
}


int main()
{

    int n,input;

      scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
       scanf("%d",&input);
       temp.first=input;
       temp.second=i;
       arra.push_back(temp);
    }

    sort(arra.begin(),arra.end(),compare);

    for(int i=0,j=n-1;i<=j;i++,j--)
    {
       printf("%d %d\n",arra[i].second+1,arra[j].second+1);

    }
    return 0;
}
