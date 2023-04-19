題目16. 子字串出現次數
成績: 0 / 倒扣: 0.8
問題描述：

給予兩個英文字串，請計算出第一個字串出現在第二個字串中的次數。

輸入說明：

輸入分為兩行，第一行是由英文大小寫字母與數字所組成的字串，長度不超過 128 個字母。

第二行也是由英文大小寫字母與數字所組成的字串，長度不超過 512 個字母。

輸出說明：

第一個字串出現在第二個字串中的次數。

範例：
Sample Input Sample Output
aa /aaa123bbab
2 
baba / 12b3bbababa12
2
baa /ababaabbbb
1
##說明

給予兩個英文字串，計算出第一個字串出現在第二個字串中的次數。

1
## 程式
```
#include<iostream>
#include<string>
using namespace std;
int appearNum(string& s,int p,string& l);
int main()
{
	string inputS,inputL,save;
	
	cin>>inputS>>inputL;
	cout<<appearNum(inputS,0,inputL)<<endl;
	return 0;
}
int appearNum(string& s,int p,string& l)
{
	int a=0;
	if(p>l.length())return a=0; 
	for(int i=0;i<s.length();i++)/
	{
		if(l[i+p]==s[i])continue; 
		else return a+=appearNum(s,p+1,l); 
	}
	a++;return a+=appearNum(s,p+1,l); 
}
```

## 截圖
![image](https://user-images.githubusercontent.com/125543109/233111684-f9d6ac4c-7cd9-4c4c-b587-163a754561f4.png)
