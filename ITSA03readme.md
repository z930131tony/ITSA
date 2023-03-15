# 題目3. 判斷座標是否在圓形的範圍內
成績: 0 / 倒扣: 0.8
## 問題描述：
有一圓形，直徑為200，且中心座標為(0,0)。請寫一支程式可以輸入「點」的座標，並判斷「點」是否在圓形的範圍內。如果「點」的位置剛好在邊界的話也算是在圓形範圍內(例：x=100，y=0)。
<br>
<img src="https://e-tutor.itsa.org.tw/e-Tutor/file.php/1395/picture_circle.jpg"/>

## 輸入說明：
輸入一整數座標，依序分別X與Y。

## 輸出說明：
輸出此座標位置在圓內或圓外訊息。

## 範例：

|輸入範例:|輸出範例:|
|--------|---------|
|50 50   |inside   |
|200 200 |outside  |

## 說明

預設圓新圍(0,0)。所以設X跟Y，然後用while讓他在輸入時第一個數到X第二個數到Y，然後設r=10000(因為圓的半徑是100，所以半徑*半徑算出它的圓面積)，然後設新的用畢氏定理兩股的平方等於斜邊的平方，而斜邊的平方又剛好等於新半徑的圓面積，所以只要新半徑的圓面積小於原半徑那這個座標點就會在圓裡面，如果大於就會在圓外。

## 程式
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int x,y;

    while (cin>>x>>y){

    int r=10000;

    double new_r=(x*x)+(y*y);

    if(new_r<r){
                cout <<  "inside" << endl;
            }

            else{
                cout << "outside" << endl;
            }
    }

    return 0;
}
## 截圖
<img src="https://cdn.discordapp.com/attachments/1080770528966619146/1085463516510703676/image.png"/>
