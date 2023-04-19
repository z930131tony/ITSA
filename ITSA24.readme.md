# 題目24. 計算複利
成績: 0 / 倒扣: 0.8
### 計算複利

### Problem Description
你每個月存 10000 元到銀行中，銀行的每月利率為 0.1% ，以複利計算，請問 3 個月後，你的帳戶為多少錢？

底下的表格示範了如何得到第 3 個月時，帳戶中的本利和（本金 + 利率總合）。

https://cdn.discordapp.com/attachments/1080770528966619146/1098213284504686662/image.png

我們定義底下幾個符號：

r: 每期利率。以前例而言， r = 0.1%

n: 期數。以前例而言， n = 3

p: 每期投入金額。以前例而言 p = 10000

現在，給你前述的三個值（即 r, n 及 p ），請計算期末的本利和。以前例而言，期未的本利合為 30060.04001 元。

### Input File Format
輸入有 3 行。第一行為 r ，為浮點數值。第二行為 n ，為一整數。第三行為 p ，為一整數。

### Output Format
輸出本利和，請將數值以「整數」表示（無條件捨去）

### Example

### Sample Input:Sample Output:

0.001

3

10000

## 程式碼
#include<iostream>
using namespace std;

int main()
{
	long double r, sum;
	long int n, p;
	cin >> r;
	cin >> n;
	cin >> p;

	sum = 0;
	while (n > 0)
	{
		sum += p;
		sum *= (1.0 + r);
		n--;
	}
	cout << (long long)sum << endl;
	return 0;
}
## 程式講解
  先設好需要的變數，並將輸入的值，帶入迴圈內，最後得出需要的值。
  
## 正確截圖
  https://cdn.discordapp.com/attachments/1080770528966619146/1098216010538045580/image.png
