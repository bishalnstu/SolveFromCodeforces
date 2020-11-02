
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,ansbr,ansrb;
    string input,br,rb;

    bool flag;

    for(int i=1;i<=100000/2;i++)
    {
        br+="br";
        rb+="rb";

    }
    while(cin>>n)
    {
        int redbr=0,blckbr=0,redrb=0,blckrb=0;
        cin>>input;

      if(input.size()==1)
        printf("0\n");
       else
       {

          for(int i=0;i<input.size();i++)
       {

           if(input[i]!=br[i])
           {
               if(br[i]=='r')
               redbr++;
               else
               blckbr++;

           }
           if(input[i]!=rb[i])
           {
               if(rb[i]=='r')
               redrb++;
               else
               blckrb++;

           }

       }


        int minbr=min(redbr,blckbr);
        int maxbr=max(redbr,blckbr);

        ansbr=(maxbr-minbr)+minbr;

        int minrb=min(redrb,blckrb);
        int maxrb=max(redrb,blckrb);

        ansrb=(maxrb-minrb)+minrb;

             cout<<min(ansrb,ansbr)<<endl;


       }

    }


    return 0;
}
