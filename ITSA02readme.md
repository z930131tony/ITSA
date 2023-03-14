# 題目2. 英哩轉公里
成績: 0 / 倒扣: 0.8
## 問題描述：
試撰寫一程式，可由鍵盤輸入英哩，程式的輸出為公里，其轉換公式如下：
1 英哩= 1.6 公里

## 輸入說明：
輸入欲轉換之英哩數(int)。

## 輸出說明：
輸出公里(double)，取到小數點以下第一位。

## 範例：
|輸入範例：|輸出範例：|
|---------|---------|
|90       |144.0    |
|95       |152.0    |


## 解釋
英哩轉公里因為需要取到小數點第一位，所以引入<iomanip>，使用setprecision來取到小數點第一位，在利用fixed取浮點數的小數點後要顯示的為數。

## 程式
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int m;

    double k;
    cin >> m ;
    k = m * 1.6 ;
    cout <<fixed<<setprecision(1)<< k << endl;

}
## 正確截圖
<img src="https://cdn.discordapp.com/attachments/1080770528966619146/1085231461260595340/image.png"  />
