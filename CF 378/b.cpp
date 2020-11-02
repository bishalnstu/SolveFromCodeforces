#include<bits/stdc++.h>

using namespace std;

int lft[1000000+5];
int ri8[1000000+5];

int main()
{

    int n;

    int rdiff,ldiff,rindx,lindx,sleft,sri8,lx,ly,rx,ry,maxm1,maxm2;
     int sLeft,sRi8;
    while(cin>>n)
    {
        ldiff=-1,rdiff=-1;
        sleft=0;
        sri8=0;
        sLeft=0;
        sRi8=0;

        for(int i=0;i<n;i++)
        {

            scanf("%d %d",&lft[i],&ri8[i]);

              if(lft[i]>ri8[i])
              {
                  if(abs(ri8[i]-lft[i])>ldiff)
                  {

                       ldiff=abs(ri8[i]-lft[i]);
                           lindx=i;


                  }

              }
              else
                {

                  if(abs(ri8[i]-lft[i])>rdiff)
                  {

                       rdiff=abs(ri8[i]-lft[i]);
                           rindx=i;

                  }


              }

                sleft+=lft[i];
                sLeft+=lft[i];
                sri8+=ri8[i];
                sRi8+=ri8[i];

        }


       int diff=abs(sri8-sleft);


          sleft=sleft-lft[lindx];

          sleft+=ri8[lindx];

          sri8=sri8-ri8[lindx];

          sri8+=lft[lindx];

          maxm1=abs(sri8-sleft);



           sLeft=sLeft-lft[rindx];

          sLeft+=ri8[rindx];

          sRi8=sRi8-ri8[rindx];

          sRi8+=lft[rindx];

          maxm2=abs(sRi8-sLeft);

              if(maxm1>diff and maxm1>=maxm2)
              {
                  printf("%d\n",lindx+1);

              }
              else if(maxm2>diff and maxm2>maxm1)
              {
                  printf("%d\n",rindx+1);

              }
              else
              {
                  printf("%d\n",0);

              }

    }


    return 0;
}
