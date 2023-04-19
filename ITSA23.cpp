#include <iostream>
#include<string>
#include<sstream>
using namespace std;

void replaceD(string &str)
{
	int i = 0;
	while (i < str.length())
	{
		if (str[i] == ',')
		str[i] = ' ';
		i++;
	}
}

int main()
{
	string str;
	int N,a1,a2,a3,cost,x,y,z;
	N = a1 = a2 = a3 = cost = 0;
	getline(cin,str);
	replaceD(str);
	stringstream ss(str);
	ss >> N >> a1 >> a2 >> a3;
	cost = a1 * 15 + a2 * 20 + a3 * 30;
	z = (N - cost) / 50;
	y = ((N - cost) % 50) / 5;
	x = ((N - cost) % 50) % 5;
	if (cost > N)
	{
		cout << "0" << endl;
	}
	else
	{
		cout << x << "," << y << "," << z << endl;
	}
	return 0;
}
