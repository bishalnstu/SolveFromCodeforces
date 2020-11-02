#include<bits/stdc++.h>

using namespace std;


int countDivisor(int n)
{
  int divisor =0,i;

  for (i = 1; i * i <= n; i++)
  {
    if (i * i == n)
	{
      divisor += 1;
    }
	else if (n % i == 0)
	{
      divisor += 2;
    }

    if(divisor>2)
        break;

  }
  return divisor;
}


int main()
{

    int n,cnt;
    bool p;

    while(scanf("%d",&n)==1)
    {

      if(n==2)
        printf("1\n");
      else if(n==3)
         printf("1\n");
      else if(n>=4 and n%2==0)
        printf("2\n");
      else
      {
          int ret=countDivisor(n);

          if(ret<=2)
          {
              printf("1\n");
          }
          else
          {
                int ret=countDivisor(n-2);

                 if(ret<=2)
                    printf("2\n");
                 else
                    printf("3\n");
          }


      }
    }


    return 0;
}
