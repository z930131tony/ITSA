#include<iostream>
using namespace std;

int main(){
int a=0,n=0,i=0;
cin >> a;

for (i = 0; i <= a;i++){

if ( i % 3 == 0)
n=n+i;

}
cout << n << endl;
return 0;
}