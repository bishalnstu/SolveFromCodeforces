
#include<bits/stdc++.h>

using namespace std;


bool compare(const std::string& a, const std::string& b)
{

    return a.size() < b.size();
}

int main()
{

string pass;

vector<string> arra;
int n,k,psize,cnt,knt,best,worst;

while(scanf("%d %d",&n,&k)==2)
{

bool flag=false;
knt=0,best=0,worst=0;

for(int i=0;i<n;i++)

{

cin>>pass;

arra.push_back(pass);

}


cin>>pass;


psize=pass.size();


sort(arra.begin(),arra.begin()+n,compare);


for(int i=0;i<n;i++)

{

if(arra[i].size()==psize and flag==false)
{

cnt=i+1;
best+=cnt;
cnt--;
best+=(cnt/k)*5;
flag=true;

}

if(arra[i].size()<=psize)
{
worst++;

}



}
worst+=((worst-1)/k)*5;

printf("%d %d\n",best,worst);

arra.clear();

}

return 0;

}
