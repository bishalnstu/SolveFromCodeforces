#include<bits/stdc++.h>

using namespace std;
bool row[100000+5];
bool col[100000+5];

vector<long long>arra;
int main()
{

    int n,k,x,y,temp,r,c;
    long long ans,p;
    while(scanf("%d %d",&n,&k)==2)
    {
        ans=(long long)n*n;
        temp=n*2-1;
        r=0;
        c=0;

        for(int i=0;i<k;i++)
        {
            scanf("%d %d",&x,&y);

            if(!row[x] and !col[y])
            {
                p=temp-r-c;
                ans=ans-p;
                arra.push_back(ans);
                row[x]=true;
                r++;
                col[y]=true;
                c++;
            }
            else if(row[x] and !col[y])
            {
                p=temp-n-r+1;
                ans=ans-p;
                 arra.push_back(ans);
                col[y]=true;
                c++;
            }
            else if(col[y] and !row[x])
            {
                p=temp-n-c+1;
                ans=ans-p;
                 arra.push_back(ans);
                row[x]=true;
                r++;
            }
            else
            {
                 arra.push_back(arra[arra.size()-1]);
            }
        }

              for(int i=0;i<k;i++)
                printf("%I64d ",arra[i]);
               printf("\n");

               arra.clear();
        memset(row,false,sizeof(row));
        memset(col,false,sizeof(col));
    }
    return 0;
}
