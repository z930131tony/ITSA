#include<iostream>
using namespace std;

int main()
{
	int input=0;
	
	cin>>input;
	while(input--)
	{
		int ai=0,a=0,bi=0,b=0;
		char w;
		
		cin>>w>>ai>>a>>bi>>b;
		switch(w) 
			case '+':cout<<ai+bi<<" "<<a+b<<endl;break;
			case '-':cout<<ai-bi<<" "<<a-b<<endl;break;
			case '*':cout<<ai*bi-a*b<<" "<<a*bi+ai*b<<endl;break;
			case '/':cout<<(ai*bi+a*b)/(bi*bi+b*b)<<" "<<a*bi-ai*b/(bi*bi+b*b)<<endl;break;
		}
	}
	system("pause");
	return 0;
} 
