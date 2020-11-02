#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int a,d;
    string input;
    while(scanf("%d",&n)==1)
     {
         a=0;
         d=0;

         getchar();
         getline(cin,input);

         for(int i=0;i<input.size();i++)
         {

             if(input[i]=='A')
              a++;
              else
                d++;

         }

         if(a>d)
            printf("Anton\n");
          else if(a<d)
          printf("Danik\n");
         else

         {

             printf("Friendship\n");
         }

     }

    return 0;
}
