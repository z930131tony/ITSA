#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
    float A[10];
    cin>>A[0]>>A[1]>>A[2]>>A[3]>>A[4]>>A[5]>>A[6]>>A[7]>>A[8]>>A[9];
    int i, j, temp;
    int n = sizeof(A)/sizeof(int);
    for(i = n-1; i > 0; i--)
    {
    for(j = 0; j <= i-1; j++)
    {
        if( A[j] > A[j+1])
        {
            temp = A [j];
            A[j] = A[j+1];
            A[j+1] = temp;
        }
    }
}
    cout<<"maximum:"<<fixed<< setprecision(2)<<A[9]<<endl;
    cout<<"minimum:"<<fixed<< setprecision(2)<<A[0]<<endl;
}
