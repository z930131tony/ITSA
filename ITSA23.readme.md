# 題目23. 找零錢問題
成績: 0 / 倒扣: 0.8
## 問題描述 ：

假設銅板有1元、5元、50元共三種，媽媽請小明去菜市場買水果，給了小明N元，且媽媽交待，要老闆找小明的零錢的數目要最少，而小明到了水果攤買了a1顆蘋果，a2顆柳丁，及a3顆桃子，1顆蘋果15元，1顆柳丁20元，1顆桃子30元，請問老問需找多少個1元、5元、50元，其銅板數目最少。

## 輸入說明 ：

先輸入媽媽給小明多少錢，N，接著輸入a1, a2, a3 ， 在此n, a1, a2, a3為整數，且a1*15+ a2*20+ a3*30小於或等於N。

## 輸出說明 ：

列出共找小明多少個1元，5元及50元，若帶的錢不夠買水果，則顯示”0”。

## 範例 ：
https://cdn.discordapp.com/attachments/1080770528966619146/1098228721166585886/image.png

## 程式
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
## 程式解釋
  設定變數，輸入值，帶入題目給的公式，並依題目給的條件，判斷出結果，如果為0的話就是不夠錢，另外小於或等於的話，就會顯示該找多少的50、5、1塊錢。
## 正確截圖
  https://cdn.discordapp.com/attachments/1080770528966619146/1098229403185598566/image.png
  
