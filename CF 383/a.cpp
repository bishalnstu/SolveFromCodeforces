#include<stdio.h>
#include<iostream>
#define i64 long long
i64 M;
int c=1;
using namespace std;

i64 F(i64 B,i64 P)
{
	if(P==0) return 1;
	if(P%2==0)
	{
		i64 ret=F(B,P/2);

		return ((ret%M)*(ret%M))%M;

	}
	else
	//printf("else %d:(%lld mod %lld)*(%lld mod %lld) mod %lld\n",c++,B,M,F(B,P-1),M,M);
		return ((B%M)*(F(B,P-1)%M))%M;

}

int main()
{


i64 P,ans;

while(cin>>P)
{
    M=10;
ans=F(8,P);
      cout<<ans<<endl;
}
	return 0;
}

