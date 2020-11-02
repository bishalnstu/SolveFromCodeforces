#include<bits/stdc++.h>

using namespace std;

char arra[1000+5][1000+5];
int row[1000+5],col[1000+5];

vector<pair<int,int> > checkcol,checkrow;

int main()
{
    //memset(row,0,sizeof(row));
    //memset(col,0,sizeof(col));
    pair<int,int>temp;
    int n,m,rmax,cmax,r,c,cnt;

    scanf("%d %d",&n,&m);

    getchar();

      cnt=0;
      rmax=0;
      cmax=0;
      r=1;
      c=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
             scanf("%c",&arra[i][j]);

             if(arra[i][j]=='*')
             {
                 row[i]++;
                 col[j]++;
                 temp.first=i;
                 temp.second=j;
                checkrow.push_back(temp);
                 temp.first=j;
                 temp.second=i;
                  checkcol.push_back(temp);

                 if(row[i]>rmax)
                 {
                     rmax=row[i];
                     r=i;
                 }
                 if(col[j]>=cmax)
                 {
                     cmax=col[j];
                     c=j;
                 }

                 cnt++;
             }
        }
        getchar();
    }

         /*for(int i=1;i<=n;i++)
         {
             for(int j=1;j<=m;j++)
             {
                 printf("%c",arra[i][j]);
             }
             printf("\n");
         }*/


         // cout<<r<<" "<<c<<endl;

         if(arra[r][c]=='*' and rmax>1 and cmax>1)
            rmax--;

          if(rmax>1 and cmax==1)
          {
              for(int i=0;i<checkcol.size();i++)
              {
                  if(checkcol[i].second!=r)
                  {
                      c=checkcol[i].first;
                      break;
                  }
              }

          }
          else if(cmax>1 and rmax==1)
          {
              for(int i=0;i<checkrow.size();i++)
              {
                  if(checkrow[i].second!=c)
                  {
                      r=checkrow[i].first;
                      break;
                  }
              }

          }

     if(rmax+cmax>=cnt)
     {
        printf("YES\n");
        printf("%d %d\n",r,c);
     }
     else
        printf("NO\n");

    return 0;
}
