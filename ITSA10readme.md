# 題目10. 輾轉相除法
成績: 0 / 倒扣: 0.8
## 問題描述：

給定二個正整數，利用輾轉相除法求其最大公因數。

## 輸入說明：

給定二個正整數

## 輸出說明：

輸出最大公因數

## 範例：

假設輸入為 300 與 250, 則輸出為 50

##說明
先設變數a和b，再設while迴圈，將輸入的a和b輸出前面的程式碼，利用if判斷b是否等於0，沒有的話就執行a除以b取餘數，並回傳b的值。

## 程式
#include<iostream>  
using namespace std;  
  
int f( int a, int b )  
{  
    if( b==0 )  
        return a;  
    return f( b, a%b );  
}  
  
int main()  
{  
    int a, b;  
  
    while( cin >> a >> b )  
    {  
        cout << f(a,b) << endl;  
    }  
  
    return 0;  
}  

## 截圖
<img src="https://cdn.discordapp.com/attachments/1080770528966619146/1086607262233133107/image.png"/>
