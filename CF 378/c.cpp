
#include<bits/stdc++.h>

using namespace std;

vector<int>temp;
map<float,vector<int> > ans;

struct triple{

int a,b,c;


}arra[100000];

map<int,bool> check1,check2,test;

int findmin(int a,int b,int c)
{

     int  temp, mini;

    temp = (a < b)    ? a : b;
    mini =  (c < temp) ? c : temp;

  return mini;

}

int main()
{
    float radius,maxm;
    int n,a,b,c,cnt,p1,p2;
     vector<int>tmp;

    while(cin>>n)
    {
            maxm=-1;

        for(int i=0;i<n;i++)
        {

            scanf("%d %d %d",&a,&b,&c);

            arra[i].a=a;
            arra[i].b=b;
            arra[i].c=c;

              int ret=findmin(a,b,c);

                    radius=(float)ret/2;
                       if(radius>maxm)
                        maxm=radius;
              ans[radius].push_back(i+1);

        }

        for(int i=0;i<n-1;i++)
        {
                check1[arra[i].a]=true;
                check1[arra[i].b]=true;
                check1[arra[i].c]=true;

            for(int j=i+1;j<n;j++)
            {
                check2.clear();
                bool flag=false;
                 tmp.clear();
                 test.clear();
                check2[arra[j].a]=true;
                check2[arra[j].b]=true;
                check2[arra[j].c]=true;
                cnt=0;

                    if(check1[arra[i].a]==check2[arra[i].a])
                    {

                        tmp.push_back(arra[i].a);
                        if(!test[arra[i].a])
                        cnt++;
                        test[arra[i].a]=true;

                    }
                     else
                     {

                         p1=arra[i].a;
                     }


                      if(check1[arra[i].b]== check2[arra[i].b])
                      {
                          tmp.push_back(arra[i].b);
                           if(!test[arra[i].b])
                            cnt++;
                        test[arra[i].b]=true;

                      }
                        else
                        p1=arra[i].b;

                         if(check1[arra[i].c]== check2[arra[i].c])
                         {
                             tmp.push_back(arra[i].c);
                              if(!test[arra[i].c])
                                  cnt++;
                        test[arra[i].c]=true;

                         }
                           else
                           p1=arra[i].c;


                               if(check1[arra[j].a] != check2[arra[j].a])
                              {

                                p2=arra[j].a;
                                flag=true;

                              }
                              else if(check1[arra[j].b] != check2[arra[j].b])
                              {

                                p2=arra[j].b;
                                flag=true;

                              }
                              else if(check1[arra[j].c] != check2[arra[j].c])
                              {

                                p2=arra[j].c;
                                 flag=true;
                              }


                        if(cnt==2 and flag==false)
                         {
                             cout<<"here"<<endl;
                             tmp.push_back(p1+arra[j].a);

                                 int ret=findmin(tmp[0],tmp[1],tmp[2]);

                               radius=(float)ret/2;

                                          if(radius>maxm)
                                            maxm=radius;

                                 ans[radius].push_back(i+1);
                                 ans[radius].push_back(j+1);
                         }

                       else if(cnt==2)
                         {

                             tmp.push_back(p1+p2);

                               int ret=findmin(tmp[0],tmp[1],tmp[2]);

                               radius=(float)ret/2;

                                     if(radius>maxm)
                                            maxm=radius;

                                 ans[radius].push_back(i+1);
                                 ans[radius].push_back(j+1);

                         }
                         else if(cnt==3)
                         {
                             sort(tmp.begin(),tmp.end());
                             radius=(float)tmp[1]/2;

                                     if(radius>maxm)
                                            maxm=radius;

                              ans[radius].push_back(i+1);
                              ans[radius].push_back(j+1);
                         }



            }

            check1.clear();

        }

                cout<<ans[maxm].size()<<endl;
                cout<<ans[maxm][0];
                if(ans[maxm].size()==2)
                    cout<<" "<<ans[maxm][1]<<endl;
                    else
                        cout<<endl;
                ans.clear();

    }


    return 0;
}
