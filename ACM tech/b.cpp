#include<bits/stdc++.h>

using namespace std;

vector<int>arra;

int main()
{

     int n,pos,input,ptr,indx,sum,ptr1,ptr2,temp;

       while(scanf("%d %d",&n,&pos)==2)
{

    sum=0;

    for(int i=0;i<n;i++)
    {
        scanf("%d",&input);
        arra.push_back(input);

    }
    sort(arra.begin(),arra.end());

     for(int i=0;i<n-1;i++)
     {

         sum+=abs(arra[i]-arra[i+1]);

     }

     for(int i=0;i<n;i++)
    {
        if(arra[i]>=pos)
        {
            ptr=i;
            break;
        }
    }

     if(ptr==1)
     {

     }
     else if(ptr==)

}

    return 0;
}
