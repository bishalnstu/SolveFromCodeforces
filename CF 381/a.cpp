#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<unsigned long long>arra;

     int n,p,q,r;
      unsigned long long k,tmp1,tmp2,tmp3;
      unsigned long long ans;

     while(scanf("%d %d %d %d",&n,&p,&q,&r)==4)
    {

        int tmp=4-(n%4);

      if(tmp==4)
        cout<<0<<endl;
      else if(tmp==1)
      {

          tmp1=min((unsigned long long)p,3*(unsigned long long)r);
          tmp2=min(tmp1,(unsigned long long)(q+r));
          cout<<tmp2<<endl;

      }
      else if(tmp==2)
       {

           tmp1=min((unsigned long long)q,2*(unsigned long long)p);
           tmp2=min(tmp1,(unsigned long long)r*2);

           cout<<tmp2<<endl;

       }

       else if(tmp==3)
       {

           tmp1=min(3*(unsigned long long)p,(unsigned long long)r);
           tmp2=min(tmp1,(unsigned long long)(p+q));

           cout<<tmp2<<endl;
       }
    }

    return 0;
}
