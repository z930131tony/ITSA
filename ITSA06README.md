題目6. 季節判定
成績: 0 / 倒扣: 0.8
問題描述：
試撰寫一程式，可輸入月份，然後判斷其所屬的季節（ 3,4,5 月為春季，6,7,8 月為夏季， 9,10,11 月為秋季， 12,1,2 月為冬季）。

輸入說明：
輸入月份。

輸出說明：
輸出該月份的季節， 3~5 月為春季(Spring)， 6~8 月為夏季(Summer)， 9~11 月為秋季(Autumn)， 12~2 月為冬季(Winter)。

範例：

Sample Input:		Sample Output:

3			Spring
10			Autumn

解釋:
將input初始值設為0，input/3，如果商數為0或4(餘數忽略)，則為Winter，商數為1，則為Spring，商數為2，則為Summer，商數為3，則為Autumn。 

程式:
```
#include<iostream>

using namespace std;

int main()
{
    int input=0;
  
    cin >> input;
  
    switch (input/ 3)
    {
        case 0: cout <<"Winter" <<endl;
        break;
        case 1: cout <<"Spring" <<endl; 
        break;
        case 2: cout <<"Summer" <<endl; 
        break;
        case 3: cout <<"Autumn" <<endl;
        break;
        case 4: cout <<"Winter" <<endl;
        break;
        
    } 

    return 0;
} 
```
正確截圖:
![image](https://user-images.githubusercontent.com/125543109/225303703-54dbcac0-afa0-4ae9-9721-8253914405e3.png)
