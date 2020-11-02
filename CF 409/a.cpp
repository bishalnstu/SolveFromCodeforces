#include<bits/stdc++.h>

using namespace std;

int main()
{

     string input;
     int ptr;
     bool flag;

         cin>>input;

          flag=false;
            ptr=0;

       for(int i=0;i<input.size()-1;)
       {

          if(input[i]=='V' and input[i+1]=='K')
            {

                ptr++;
                i+=2;
            }
            else
            {
                if(input[i]=='V' and input[i+1]=='V' and flag==false)
                {

                    if(input[i+1]=='V' and input[i+2]!='K')
                    {
                        ptr++;
                        i+=2;
                        flag=true;
                    }
                    else
                      i++;
                }
               else if(input[i]=='K' and input[i+1]=='K' and flag==false)
                {

                        ptr++;
                        i+=2;
                        flag=true;
                }
                else
                    i++;
            }
       }


       cout<<ptr<<endl;

    return 0;
}
