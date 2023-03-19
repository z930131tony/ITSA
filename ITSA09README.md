題目9. 計算正整數被3整除之數值之總和
成績: 0 / 倒扣: 0.8
問題描述：
試寫一個程式，輸入一正整數N，可計算出1到N之間可被3整除的數值之總和。

輸入說明：
輸入一正整數。

輸出說明：
輸出總和。

範例：

輸入範例:   輸出範例:

100         1683

150         3825



## 說明
使用for迴圈列出1~n的所有數字，再以if判斷是否能被3整除(%3)，條件成立就將i加到n上，否則跳過。

## 程式
```
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
```

## 截圖
![image](https://user-images.githubusercontent.com/125543109/226158845-e31ec786-c981-4c5f-863e-5ea1402c3c26.png)
