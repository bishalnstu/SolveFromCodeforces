#include<bits/stdc++.h>
using namespace std;

int kafa[10000];
int sasha[10000];
int freq[10000];
vector<int>ans1,tmp1,tmp2;
vector<int>ans2;
vector<int>p,q;
vector<int>ans[100];
int main()
{

      int n,l,temp,sum1,sum2,minfreq,minm;

      while(scanf("%d %d",&n,&l)==2)
      {
          memset(freq,0,sizeof(freq));

      for(int i=0;i<n;i++)
      {
          scanf("%d",&kafa[i]);
      }

      for(int i=0;i<n;i++)
      {
          scanf("%d",&sasha[i]);

      }
      sum1=0;
      sum2=0;

      for(int i=1;i<n;i++)
      {

          temp=kafa[i]-kafa[i-1];
          ans1.push_back(temp);

           freq[temp]++;

          sum1+=temp;
          temp=sasha[i]-sasha[i-1];
          ans2.push_back(temp);
          sum2+=temp;
      }

       temp=l-sum1;
       ans1.push_back(temp);
       freq[temp]++;

       temp=l-sum2;
       ans2.push_back(temp);
        minfreq=10000;

       for(int i=0;i<ans1.size();i++)
        {

            if(freq[ans1[i]]<minfreq)
            {
                minfreq=freq[ans1[i]];
                minm=ans1[i];
            }
        }

        for(int i=0;i<ans1.size();i++)
        {

            if(ans1[i]==minm)
            {
                p.push_back(i);
            }
            if(ans2[i]==minm)
            {
                q.push_back(i);
            }

        }

       bool flag=false;

            int ptr=0;

        if(p.size()==q.size())
         {
             for(int i=0;i<p.size();i++)
             {

               for(int j=p[i];j<ans1.size();j++)
                 tmp1.push_back(ans1[j]);
                 for(int j=0;j<p[i];j++)
                  tmp1.push_back(ans1[j]);
                   ans[ptr++]=tmp1;
                  tmp1.clear();

             }

             for(int i=0;i<q.size();i++)
               {

                 for(int j=q[i];j<ans2.size();j++)
                 tmp2.push_back(ans2[j]);
                 for(int j=0;j<q[i];j++)
                 tmp2.push_back(ans2[j]);

                   for(int j=0;j<ptr;j++)
                    {
                        if(ans[j]==tmp2)
                         {
                             flag=true;
                             break;
                         }
                    }

                    tmp2.clear();
               }

         }
         else
          flag=false;

       if(flag)
       printf("YES\n");
       else
         printf("NO\n");

          memset(freq,0,sizeof(freq));
          memset(ans,0,sizeof(ans));
          p.clear();
          q.clear();
          ans1.clear();
          ans2.clear();
      }


    return 0;
}

