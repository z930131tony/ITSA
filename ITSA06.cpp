#include<iostream>

using namespace std;

int main()
{
    int input=0;
  
    cin >> input;
  
    switch (input/ 3)
    {
        case 0: cout <<"Winter" <<endl;
        break;
        case 1: cout <<"Spring" <<endl; 
        break;
        case 2: cout <<"Summer" <<endl; 
        break;
        case 3: cout <<"Autumn" <<endl;
        break;
        case 4: cout <<"Winter" <<endl;
        break;
        
    } 

    return 0;
} 
