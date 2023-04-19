#include<iostream>
using namespace std;
int main()
{
    int n=0,t[24]={0};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a=0,b=0;
        cin>>a>>b;
        for(int j=a-1;j<b-1;j++){t[j]++;}
    }
    n=t[0];
    for(int i=0;i<24;i++)
        {
        if(n<t[i])
            n=t[i];
    }
    cout<<n<<endl;
    return 0;
}
