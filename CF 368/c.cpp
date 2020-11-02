#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long input,t1,t2,t3,a=3,b=4,c=5;
    int n;

    while(scanf("%d",&n)==1)
    {
        if(n==1 or n==2) printf("-1\n");

        else
        {
              input=(long long)n*(long long)n;

       for(int i=1;i<=1000000000;i++)
       {

        t1=(long)a*i;
        t1*=t1;
        t2=(long)b*i;
        t2*=t2;
        t3=(long)c*i;
        t3*=t3;
        cout<<t1<<" "<<t2<<" "<<t3<<endl;

        if(t1==input or t2==input or t3==input)
        {
            if(t1==input)
            printf("%d %d\n",(int)sqrt(t2),(int)sqrt(t3));
            else if(t2==input)
            printf("%d %d\n",(int)sqrt(t1),(int)sqrt(t3));
            else
            printf("%d %d\n",(int)sqrt(t1),(int)sqrt(t2));

            break;
        }

       }

        }


    }
    return 0;
}
