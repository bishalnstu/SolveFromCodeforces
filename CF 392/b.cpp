#include<bits/stdc++.h>

using namespace std;

map<char,int>ans;

char ptr1,ptr2,ptr3;

int main()
{

         int G,B,R,Y,tmp;
     string input;

     getline(cin,input);

     ans['G']=0;
     ans['R']=0;
     ans['B']=0;
     ans['Y']=0;

     for(int i=0;i<(input.size()-input.size()%4);i+=4)
      {

          if(input[i]!='!')
            ptr1=input[i];
          if(input[i+1]!='!')
            ptr2=input[i+1];
            if(input[i+2]!='!')
            ptr3=input[i+2];

              G=0;
              B=0;
              R=0;
              Y=0;

         if(input[i]=='G' or input[i+1]=='G' or input[i+2]=='G' or input[i+3]=='G')
          G=1;
          if(input[i]=='R' or input[i+1]=='R' or input[i+2]=='R' or input[i+3]=='R')
          R=1;
          if(input[i]=='B' or input[i+1]=='B' or input[i+2]=='B' or input[i+3]=='B')
          B=1;
          if(input[i]=='Y' or input[i+1]=='Y' or input[i+2]=='Y' or input[i+3]=='Y')
          Y=1;

             if(G==0)
             {
                 ans['G']++;
             }
             if(B==0)
             {
                 ans['B']++;
             }
             if(R==0)
             {
                 ans['R']++;
             }
             if(Y==0)
             {
                ans['Y']++;
             }

             //cout<<ans['R']<<" "<< ans['B']<<" "<<ans['Y']<<" "<<ans['G']<<endl;

      }


      int p=input.size()%4;
       tmp=input.size()/4;
       tmp*=4;

       if(input[tmp]!='!')
            ptr1=input[tmp];

       if(p==1)
       {
           if(input[tmp]=='!')
           {
                 ans[ptr1]++;
           }
       }
       else if(p==2)
       {
              if(input[tmp]=='!')
           {
                 ans[ptr1]++;
           }

            if(input[tmp+1]=='!')
           {
                 ans[ptr2]++;
           }

       }
       else if(p==3)
       {
             if(input[tmp]=='!')
           {
                 ans[ptr1]++;
           }

            if(input[tmp+1]=='!')
           {
                 ans[ptr2]++;
           }
           if(input[tmp+2]=='!')
           ans[ptr3]++;

       }
          cout<<ans['R']<<" "<< ans['B']<<" "<<ans['Y']<<" "<<ans['G']<<endl;

    return 0;
}
