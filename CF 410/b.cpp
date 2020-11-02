#include<bits/stdc++.h>

using namespace std;

vector<string>arra;

int calstep(string orginal,string dummy)
{
    int ptr=0,len;
     len=orginal.size();
    char temp;
       while(orginal!=dummy and ptr<=len)
       {
           temp=dummy[0];
           dummy.erase(dummy.begin());
           dummy.push_back(temp);

           ptr++;
       }

       if(orginal!=dummy)
        ptr=-1;

    return ptr;
}
int main()
{

    int n,sum,ret,ans;
    string input;

    while(scanf("%d",&n)==1)
    {

        for(int i=0;i<n;i++)
         {
             cin>>input;
             arra.push_back(input);

         }

         ans=10000000;
          bool flag=false;

        for(int i=0;i<n;i++)
        {
            sum=0;

            for(int j=0;j<n;j++)
            {

                ret=calstep(arra[i],arra[j]);
                if(ret==-1)
                {

                    flag=true;
                    break;
                }
                sum+=ret;
            }

             if(flag==true)
                break;

            if(sum<ans)
                ans=sum;

        }

        if(flag==false)
            printf("%d\n",ans);
        else
            printf("-1\n");

        arra.clear();

    }

    return 0;
}
