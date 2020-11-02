#include<bits/stdc++.h>

using namespace std;
map<int,bool>check;
vector<int>Darra,Rarra;
map<char,int>arra;
int main()
{

    int n,D,R,rptr,dptr;
    string input;

    while(scanf("%d",&n)==1)
    {

        getchar();

        getline(cin,input);

        for(int i=0;i<input.size();i++)
        {
            arra[input[i]]++;

             if(input[i]=='D')
                Darra.push_back(i);
             else
                 Rarra.push_back(i);
        }

         D=arra['D'];
         R=arra['R'];

           dptr=0;
           rptr=0;

            while(D>0 and R>0)
            {

                for(int i=0;i<input.size();i++)
                {
                    if(!check[i])
                    {
                       if(input[i]=='D')
                    {
                        check[Rarra[rptr++]]=true;
                        dptr++;
                        R--;
                    }
                    else
                    {
                      check[Darra[dptr++]]=true;
                      rptr++;
                        D--;
                    }

                    if(dptr==Darra.size())
                        dptr=0;
                    if(rptr==Rarra.size())
                        rptr=0;
                    }

                    if(D==0 or R==0)
                        break;
                }

            }

        if(D>0)
            printf("D\n");
        else
           printf("R\n");

        Darra.clear();
        Rarra.clear();
        check.clear();
        arra.clear();

    }
    return 0;
}
