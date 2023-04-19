# 題目22. 圈圈叉叉
成績: 0 / 倒扣: 0.8
## 問題描述 ：

OX 遊戲是大家小時候的童年記憶，甚至在長大後，無聊時還是會玩一下呢 ! 但當你一個人時，是否也能讓電腦跟你玩呢 ?

## 輸入說明 ：

輸入一個 3*3 的 2 維矩陣，矩陣內容， 0 代表 O ， 1 代表 X 。註：每列數字之間均有空格隔開。

## 輸出說明 ：

輸出這場 OX 遊戲是否有勝負之分。註：輸出結尾需換行。

## 範例 ：
https://cdn.discordapp.com/attachments/1080770528966619146/1098233108341465108/image.png

## 程式
#include <iostream>   
using namespace std;   
   
int main() {   
   // 題目22. 圈圈叉叉   
  int input[3][3];   
   for(int i = 0;i < 3;i++)   
    {   
      for(int j = 0;j < 3;j++)   
        {   
          cin >> input[i][j];   
      }   
  }   
  bool win = false;   
  for(int i = 0;i < 3;i++)   
    {   
      if(input[i][0] == input[i][1]&&   
        input[i][1] == input[i][2])   
        {   
          win = true;   
        }   
      if(input[0][i] == input[1][i]&&   
        input[1][i] == input[2][i])   
        {   
          win = true;   
        }   
  }   
  if(input[0][0] == input[1][1]&&   
    input[1][1] == input[2][2])   
    {   
      win = true;   
    }   
  if(input[0][2] == input[1][1]&&   
    input[1][1] == input[2][0])   
    {   
      win = true;   
    }   
  if(win == true)   
    {   
      cout << "True" << endl;   
    }   
  else   
   {   
      cout << "False" << endl;   
   }   
  return 0;   
}  
                             
## 程式解說
   用陣列的方式輸入資料，再用IF判斷是否構成連線的條件，最後得出答案。
                             
## 正確截圖
https://cdn.discordapp.com/attachments/1080770528966619146/1098232293899894824/image.png
