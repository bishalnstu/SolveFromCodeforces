#include<bits/stdc++.h>
using namespace std;

 long long arra[600][600];

int main()
{
    int dimension;
    bool flag;
    long long sum,offset,ans,x,y,sum1,sum2,sum3,sum4,mainval;

    while(scanf("%d",&dimension)==1)
    {
        sum1=0;
        sum2=0;
        sum3=0;
        sum4=0;

        flag=false;

             for(int i=0;i<dimension;i++)
          {
            sum=0;
            for(int j=0;j<dimension;j++)
            {
                scanf("%d",&arra[i][j]);
                sum+=arra[i][j];

                if(arra[i][j]==0)
                {
                    x=i;
                    y=j;
                    flag=true;
                }

            }

            if(flag)
            {
                offset=sum;
                flag=false;
            }
            else
            {
                ans=sum;
            }

        }

          if(dimension==1)
          {
              printf("1\n");
          }
          else
          {
               mainval=ans;

          ans=ans-offset;

            arra[x][y]=ans;

          for(int i=1,j=1;i<=dimension,j<=dimension;i++,j++)
          {
             sum1+=arra[i-1][j-1];
          }
           for(int i=0,j=dimension-1;i<dimension,j>=0;i++,j--)
          {
             sum2+=arra[i][j];
          }

                 flag=false;

              if(sum1!=sum2 or ans<=0)
                printf("-1\n");
              else
              {
               for(int i=0;i<dimension;i++)
               {
                   sum3=0;

              for(int j=0;j<dimension;j++)
                {
                  sum3+=arra[i][j];

                }
                if(sum3!=sum2)
                {
                    printf("-1\n");
                    flag=true;
                    break;
                }
               }

                if(!flag)
                {

                    for(int j=0;j<dimension;j++)
                    {
                        sum4=0;
                        for(int i=0;i<dimension;i++)
                        {
                           sum4+=arra[i][j];

                        }
                        if(sum4!=sum2)
                        {

                            flag=true;
                            printf("-1\n");
                            break;
                        }
                    }

                    if(!flag)
                    {
                        cout<<ans<<endl;

                    }
                }


              }



          }


    }

    return 0;
}
