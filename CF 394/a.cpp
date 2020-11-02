#include<bits/stdc++.h>
using namespace std;

int main()
{
        int a,b;

        scanf("%d %d",&a,&b);

        if(a==0 and b==0)
            printf("NO\n");
        else if(a>b)
        {
            if(a-b==1)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
        {
            if(b-a==1 or b-a==0)
                printf("YES\n");
            else
                printf("NO\n");
        }

    return 0;
}
