#include<bits/stdc++.h>
bool flag[200005];
int List[3551797],primes[1000];
int listSize,cnt;


using namespace std;

vector<int>arra;

void sieve(int n)
{

cnt=0;
primes[cnt++] = 2;
for(int i=3; i<=n; i+=2)
{
if(flag[i] == 0)
{
primes[cnt++] = i;
if(i <= n/i)
{
for(int j=i*i; j<=n; j+=i*2)
flag[j] = 1;
}
}
}

return ;
}

void primeFactorize( int n )
 {
    listSize = 0;


    for(int i = 0;i<cnt and primes[i]<=(int)sqrt(n);i++)
	{
        if( n % primes[i] == 0 )
		{
            while( n % primes[i] == 0 )
			 {

                n /= primes[i];

                List[listSize] = primes[i];
                listSize++;
            }

        }
    }

    if( n > 1 )
	{

        List[listSize] = n;
        listSize++;
    }

    return ;
}
int main()
{
	int n,last,k;
	sieve(350);
	while(scanf("%d %d",&n,&k)!=EOF)
	{
		primeFactorize(n);
           int product=1;

    for( int i = 0; i < listSize; i++ )
    {
        if(i<k-1)
        {
            arra.push_back(List[i]);

        }
         else
           product*=List[i];

    }
        arra.push_back(product);

        if(listSize<k)
           printf("-1\n");
        else
        {
            for(int i=0;i<arra.size();i++)
        printf("%d ",arra[i]);

       printf("\n");
        }


        memset(List,0,sizeof(int)*listSize);
        arra.clear();
	}


    return 0;
}

