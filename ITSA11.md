!題目11. 矩陣反轉

成績: 0 / 倒扣: 0.8

問題A描述 ：

請設計一程式，輸入一個陣列並且反轉後再輸出。

輸入說明 ：

第一行先輸入矩陣的行、列，之後再輸入陣列元素。

輸出說明 ：

反轉後的矩陣。

說明:

先取得行與列

將此行每一列的數值分別存入陣列之中

兩個for分別是反轉後的行數與列數

最後將陣列反轉輸出

#include using namespace std;

int main() { int a,b,count; int *num; count = 0; cin >> a >> b; num = new int[a * b]; for (int i = 0;i < (a * b); i++) { cin >> num[i]; } for (int i = 0;i < b; i++) { for (int j = 0;j < a; j++) { count++; cout << num[j * b + i]; if (count % a != 0) cout << " "; } cout << endl; } delete []num; return 0; }

螢幕擷取畫面 2023-03-21 212021
