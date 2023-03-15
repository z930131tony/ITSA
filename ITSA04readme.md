# 題目4. 停車費計算
成績: 0 / 倒扣: 0.8
## 問題描述：
假設某個停車場的費率是停車2小時以內，每半小時30元，超過2小時，但未滿4小時的部份，每半小時40元，超過4小時以上的部份，每半小時60元，未滿半小時部分不計費。如果您從早上10點23分停到下午3點20分，請撰寫程式計算共需繳交的停車費。

輸入說明：
輸入兩組時間，分別為開始與離開時間，24小時制。

## 輸出說明：
輸出停車費。

## 說明
先打出開始時間和結束的時間計算總共多少時間,看是算兩個小時的費用還是四個小時內的費用+兩個小時的費用和
四個小時外的費用+四個小時內的費用+兩個小時的費用

## 程式碼
#include<iostream>
using namespace std;
 
int main()
{
    int startH=0,startM=0,endH=0,endM=0;

    cin>>startH>>startM;//讀入開始時間 
    cin>>endH>>endM;//讀入結束時間
    int time=(endH60+endM)-(startH60+startM);//計算總時數 
    if(time<=120 && time>=0){
        cout<<time/3030<<endl;//2小時內的費用 
    } 
    else if(time>120 && time<=240){
        cout<<(time-120)/3040+120<<endl;//4小時內的費用+2小時的費用
    }
    else{
        cout<<(time-240)/30*60+120+160<<endl;//4小時外的費用+4小時的費用+2小時的費用
    } 
    return 0;
}
## 截圖
<img src="https://user-images.githubusercontent.com/42032550/225308107-4d233b2b-b678-4663-a3cd-5f77474ff0f8.png"/>
