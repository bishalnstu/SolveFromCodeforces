#include<bits/stdc++.h>

using namespace std;

int main()
{

 long long test,n,guess,temp;
 int cnt=1;
  cin>>test;

 while(test--)
 {

     scanf("%lld",&n);

     guess=1000LL;
     temp=guess;

     guess*=(long long)2;

     guess+=n;

     guess/=(long long)2;

     guess-=temp;

     printf("Case %d: %lld\n",cnt++,guess);
 }
return 0;
}

