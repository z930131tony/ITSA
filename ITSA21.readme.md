題目19. 最大值與最小值

成績: 0 / 倒扣: 0.8

問題描述：

寫一個程式來找出輸入的十個數字的最大值和最小值，數值不限定為整數，且值可存放於 float 型態數值內。

輸入說明：

輸入十個數字，以空白間隔。

輸出說明：

輸出數列中的最大值與最小值，輸出時需附上小數點後兩位數字。

範例：

輸入範例                              輸出範例

-2 -15.2 0 89.5 100 25.3 7 30 76 4   maximum:100.00
                                     minimum:-15.20

0 3 52.7 998 135 -256 79 95 10 16    maximum:998.00
                                     minimum:-256.00

解釋

輸入n個數進到A字串，然後算有幾個數，在用temp、A[j]、A[j+1]來替換最後讓他們排在A[0]跟A[9]，來分辨誰最大誰最小。

程式

#include <iostream>
  
#include<string>
  
#include<iomanip>
  
using namespace std;

int main()
  
{
  
    float A[10];
  
    cin>>A[0]>>A[1]>>A[2]>>A[3]>>A[4]>>A[5]>>A[6]>>A[7]>>A[8]>>A[9];
  
    int i, j, temp;
  
    int n = sizeof(A)/sizeof(int);
  
    for(i = n-1; i > 0; i--)
  
    {
  
    for(j = 0; j <= i-1; j++)
                       
    {
                       
        if( A[j] > A[j+1])
  
        {
  
            temp = A [j];
  
            A[j] = A[j+1];
  
            A[j+1] = temp;
  
        }
  
    }
  
}
  
    cout<<"maximum:"<<fixed<< setprecision(2)<<A[9]<<endl;
  
    cout<<"minimum:"<<fixed<< setprecision(2)<<A[0]<<endl;
  
}

正確截圖

https://cdn.discordapp.com/attachments/1080770528966619146/1098188615110111352/image.png
