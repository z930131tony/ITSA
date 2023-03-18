#題目8. 質數判別

成績: 0 / 倒扣: 0.8

##問題描述：

試撰寫一個程式，由輸入一個整數，然後判別此數是否為質數。質數是指除了 1 和它本身之外，沒有其它的數可以整除它的數，例如， 2, 3, 5, 7 與 11 等皆為質數。

##輸入說明：

輸入一個正整數。

##輸出說明：

質數顯示 YES ；非質數顯示 NO 。

##範例：

Sample Input:  |Sample Output:  |

23             |YES             |

37             |YES             |

39             |NO              |

##解釋

先輸入一個數值n到in，判斷n是不是1如果是就會直接跳到結束，然後顯示NO，如果輸入的一個數值n不是1就會進到for迴圈對n開根號，最後判斷他開根號是否為0，如果是就會顯示NO，不是就會顯示YES
##程式

#include <iostream>

#include <math.h>

using namespace std;

int main()
{

    int in=0,out=0;

    bool flag=false;

    while (cin>>in)

    {

         in==1? flag=true:flag=false;

        out=sqrt(in);

        for (int i = out; i>1; i--)

        {

            in%i==0?flag=true:flag=false;

            if (flag==true)break;

        }

        flag==true?cout<<"NO\n":cout<<"YES\n";


    }

    return 0;
}
##正確截圖

<img src="https://cdn.discordapp.com/attachments/1080770528966619146/1086547461503451166/image.png"/>