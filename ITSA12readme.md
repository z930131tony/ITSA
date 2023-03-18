##題目12. 遞迴程式練習

成績: 0 / 倒扣: 0.8

##問題描述：

給定下列遞迴函式 :

<img src="https://e-tutor.itsa.org.tw/e-Tutor/file.php/1395/C_RU06.JPG"/>

##輸入說明：

請計算出 f (k) 。

##輸入說明：

輸入值為一個大於 1 的整數。

##輸出說明：

f(k) 的計算結果。

##範例：
Sample Input    |Sample Output      |

10              |60                 |

12              |94                 |

##解釋

輸入一個值n，讓他跑到上面的f(n)的迴圈，如果n等於0或者1，就輸出n+1，如果n>1就會將n-1同時n除以2，如果n還是大於1，就會一直重複迴圈直到n等於0或者1，最後在顯示出來

##程式

#include <iostream>

using namespace std;

int f(int n){
    if(n==0||n==1) {

        return n+1;

    }

    else if(n>1){

        return f(n-1)+f(n/2);

    }

}

int main(){
    int n;

    cin>>n;

    cout<<f(n)<<"\n";

    return 0;

}

<img src="https://cdn.discordapp.com/attachments/1080770528966619146/1086556507488931860/image.png"/>
