#include<bits/stdc++.h>

using namespace std;

bool flag[10000005];
bool primes[10000000];
int cnt;

void sieve(int n)
{
cnt=0;

primes[2] = true;

for(int i=3; i<=n; i+=2)
{
if(flag[i] == 0)
{
primes[i] = true;

if(i <= n/i)
{
for(int j=i*i; j<=n; j+=i*2)
flag[j] = 1;
}


}
}

return ;
}


int main()
{

    int n,mid,rem;

     sieve(1000000+5);

    while(scanf("%d",&n)==1)
    {

        if(primes[n])
            printf("%d %d\n",1,n);
        else
        {
            mid=sqrt(n);
            rem=mid;

            while(mid*rem!=n)
            {

                if(mid*rem>n)
                {
                   mid--;
                }
                else
                     rem++;
            }
            printf("%d %d\n",mid,rem);
        }

    }

    return 0;
}
