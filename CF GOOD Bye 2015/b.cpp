#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long x, y;
    scanf("%I64d %I64d", &x, &y);
    long long arr[100];
    int i = 0;
    long long got = 1;
    while(got<=y)
    {
        arr[i++] = got;
        got = got * 2;
    }
    long long res = 0;
    long long d;
    for(int j=0; j<i; j++)
    {
        d = arr[j];
        arr[j] = 0;
        long long add = 0;
        for(int l=0; l<i; l++)
        {
            add = add + arr[l];
            if(add<=y){
                if(add>=x){
                    if(l>j)res++;
                }
            }
            else break;
        }
        arr[j] = d;
    }
    printf("%I64d", res);
}
