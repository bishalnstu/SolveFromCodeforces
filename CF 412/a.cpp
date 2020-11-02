#include<bits/stdc++.h>

using namespace std;


vector<pair<int,int> >arra;

int main()
{

     int n,before,after;
     bool flag,check=false;
     pair<int,int>temp;

    int maxa,maxb;

     while(scanf("%d",&n)==1)
    {
        flag=false;
         check=false;

        for(int i=0;i<n;i++)
        {

            scanf("%d %d",&before,&after);

              temp=make_pair(before,after);

              arra.push_back(temp);

            if(before!=after)
            {
               flag=true;

            }
            else
            {

               if(i>0)
                 {
                     if(arra[i-1].first<arra[i].first)
                       check=true;
                 }
            }
        }


          if(flag)
            printf("rated\n");
          else if(flag==false and check==false)
                printf("maybe\n");
           else
             printf("unrated\n");

          arra.clear();

    }
    return 0;
}
