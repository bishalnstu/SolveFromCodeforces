#include<bits/stdc++.h>

using namespace std;

 int px,py,qx,qy,rx,ry,sx,sy,p,q;

int main()
{

    while(scanf("%d %d",&px,&py)==2)
{
    scanf("%d %d",&qx,&qy);
    scanf("%d %d",&rx,&ry);

    p=rx-qx;
    q=-(px);

    if(q>=0)
    {
        sx=p-q;
    }
    else
    {
        sx=p+abs(q-0);
    }

    p=ry-qy;
    q=-(py);

    if(q>=0)
    {
        sy=p-q;
    }
    else
    {
      sy=p+abs(q-0);
    }

//    cout<<3<<endl;
    cout<<sx<<" "<<sy<<endl;

    p=px-rx;
    q=-(qx);

    if(q>=0)
    {
        sx=p-q;
    }
    else
    {
        sx=p+abs(q-0);
    }

    p=py-ry;
    q=-(qy);

    if(q>=0)
    {
        sy=p-q;
    }
    else
    {
      sy=p+abs(q-0);
    }

    cout<<sx<<" "<<sy<<endl;

    p=qx-px;
    q=-(rx);

    if(q>=0)
    {
        sx=p-q;
    }
    else
    {
        sx=p+abs(q-0);
    }

    p=qy-py;
    q=-(ry);

    if(q>=0)
    {
        sy=p-q;
    }
    else
    {
      sy=p+abs(q-0);
    }

    cout<<sx<<" "<<sy<<endl;


}
    return 0;
}
