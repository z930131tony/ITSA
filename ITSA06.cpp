#include<iostream>

using namespace std;

int main()
{
	int input=0;
	
	cin >> input;
	switch (input/ 3)//取商數為區分點 
	{
		case 0: cout <<"Winter" <<endl;
		break;//商數為0，(1,2)
		case 1: cout <<"Spring" <<endl; 
		break;//商數為1，(3,4,5) 
		case 2: cout <<"Summer" <<endl; 
		break;//商數為2，(6,7,8)
		case 3: cout <<"Autumn" <<endl;
		break;//商數為3，(9,10,11)
		case 4: cout <<"Winter" <<endl;
		break;//商數為4，(12)
		
	} 

	return 0;
} 