#include<bits/stdc++.h>

using namespace std;

int main()
{
     bool flag;
     string s1,s2,s3,s4;
     string check1,check2,check3,temp1,temp,temp2;
     check1=".xx";
     check2="xx.";
     check3="x.x";

     while(cin>>s1)
     {
         cin>>s2;
         cin>>s3;
         cin>>s4;
          flag=false;

         temp=s1.substr(0,3);
         if(temp==check1 or temp==check2 or temp==check3)
           flag=true;

             temp=s1.substr(1,3);
             if(temp==check1 or temp==check2 or temp==check3)
               flag=true;

              temp=s2.substr(0,3);
            if(temp==check1 or temp==check2 or temp==check3)
            flag=true;

                 temp=s2.substr(1,3);
            if(temp==check1 or temp==check2 or temp==check3)
            flag=true;

              temp=s3.substr(0,3);
            if(temp==check1 or temp==check2 or temp==check3)
            flag=true;

                 temp=s3.substr(1,3);
            if(temp==check1 or temp==check2 or temp==check3)
            flag=true;

            temp=s4.substr(0,3);
            if(temp==check1 or temp==check2 or temp==check3)
            flag=true;

                 temp=s4.substr(1,3);
            if(temp==check1 or temp==check2 or temp==check3)
            flag=true;

               temp="";
          temp+=s1[0];
          temp+=s2[0];
          temp+=s3[0];
          if(temp==check1 or temp==check2 or temp==check3)
            flag=true;

            temp="";
            temp+=s2[0];
             temp+=s3[0];
             temp+=s4[0];

          if(temp==check1 or temp==check2 or temp==check3)
            flag=true;

              temp="";

            temp+=s1[1];temp+=s2[1];temp+=s3[1];

          if(temp==check1 or temp==check2 or temp==check3)
            flag=true;

             temp="";
            temp+=s2[1];temp+=s3[1];temp+=s4[1];

          if(temp==check1 or temp==check2 or temp==check3)
            flag=true;

             temp="";
            temp+=s1[2];temp+=s2[2];temp+=s3[2];
          if(temp==check1 or temp==check2 or temp==check3)
            flag=true;

            temp="";
            temp+=s2[2];temp+=s3[2];temp+=s4[2];

          if(temp==check1 or temp==check2 or temp==check3)
            flag=true;

             temp="";
            temp+=s1[3];temp+=s2[3];temp+=s3[3];
          if(temp==check1 or temp==check2 or temp==check3)
            flag=true;

            temp="";
            temp+=s2[3];temp+=s3[3];temp+=s4[3];
          if(temp==check1 or temp==check2 or temp==check3)
            flag=true;

            temp="";
           temp+=s1[0];temp+=s2[1];temp+=s3[2];
            if(temp==check1 or temp==check2 or temp==check3)
            flag=true;

             temp="";
             temp+=s1[3];temp+=s2[2];temp+=s3[1];
            if(temp==check1 or temp==check2 or temp==check3)
            flag=true;

            temp="";
            temp+=s2[1];temp+=s3[2];temp+=s4[3];
             if(temp==check1 or temp==check2 or temp==check3)
            flag=true;

              temp="";
            temp+=s2[2];temp+=s3[1];temp+=s4[0];
             if(temp==check1 or temp==check2 or temp==check3)
            flag=true;

            temp="";
            temp+=s2[0];temp+=s3[1];temp+=s4[2];
            if(temp==check1 or temp==check2 or temp==check3)
            flag=true;

             temp="";
            temp+=s1[2];temp+=s2[1];temp+=s3[0];
             if(temp==check1 or temp==check2 or temp==check3)
            flag=true;

             temp="";
            temp+=s1[1];temp+=s2[2];temp+=s3[3];
            if(temp==check1 or temp==check2 or temp==check3)
            flag=true;


             temp="";
            temp+=s4[1];temp+=s3[2];temp+=s2[3];
            if(temp==check1 or temp==check2 or temp==check3)
            flag=true;

           if(flag)
            printf("YES\n");
           else
            printf("NO\n");
     }
    return 0;
}

