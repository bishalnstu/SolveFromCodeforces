
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,temp2,temp1;
    int arra[1000];
    while(cin>>n)
    {

        for(int i=0;i<n;i++)
        cin>>arra[i];


        if(n==1)
        {

            if(arra[0]==15)
                 printf("DOWN\n");
            else if(arra[0]==0)
                printf("UP\n");
            else
                cout<<"-1"<<endl;
        }
        else
        {
            temp1=arra[n-2];
            temp2=arra[n-1];

            if(temp1<temp2)
            {

                if(temp2==15)
                    printf("DOWN\n");
                else
                   printf("UP\n");
            }

            else
            {

                if(temp2==0)
                   printf("UP\n");
                else
                    printf("DOWN\n");
            }

        }



    }


    return 0;
}
