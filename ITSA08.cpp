#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int in=0,out=0;
    bool flag=false;
    while (cin>>in)
    {
         in==1? flag=true:flag=false;
        out=sqrt(in);
        for (int i = out; i>1; i--)
        {
            in%i==0?flag=true:flag=false;
            if (flag==true)break;
        }
        flag==true?cout<<"NO\n":cout<<"YES\n";


    }

    return 0;
}
