題目19. 最少派車數

成績: 0 / 倒扣: 0.8

問題描述：

某遊覽車派遣公司共收到n筆任務訂單，訂單中詳細記載發車時間s和返回時間d。每一輛遊覽車只要任務時間不衝突，可立即更換司機繼續上路執行任務。請問該公司至少需要調遣多少車輛才足以應付需求？

輸入說明：

程式的輸入包含兩行數字，第一行包含一個正整數n，1 ≤ n ≤ 30，代表第二行有n筆訂單的出發時間和返回時間s1, d1, s2, d2, ..., sn, dn，0 < si < di ≤ 24，而此2n個正整數間以空格隔開。

輸出說明：

輸出最少車輛需求數。

範例：

Sample Input:  Sample Output:

3
1 6 3 12 6 18   2

解釋

先設T字串為24個字串，當作24小時，然後輸入a跟b，作為時間段，然後帶入迴圈，讓其不重複，最後在n=t[0]，讓其能夠重複運行。

程式

#include<iostream>
    
using namespace std;
    
int main()
    
{
    
    int n=0,t[24]={0};
    
    cin>>n;
    
    for(int i=0;i<n;i++)
                         
    {
                         
        int a=0,b=0;
                         
        cin>>a>>b;
    
        for(int j=a-1;j<b-1;j++){t[j]++;}
                                          
    }
                                          
    n=t[0];
                                          
    for(int i=0;i<24;i++)
    
        {
    
        if(n<t[i])
                   
            n=t[i];
                   
    }
                   
    cout<<n<<endl;
                  
    return 0;
                  
}

正確截圖
                  
https://cdn.discordapp.com/attachments/1080770528966619146/1098168662042611784/image.png
