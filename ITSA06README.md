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
將input初始值設為0，input/3，如果商數為0或4(餘數忽略)，則為Winter，商數為1，則為Spring，商數為2，則為Summer，商數為3，則為Autumn。
