#include <iostream>
#include <stdio.h>

using namespace std;


int main() {
    int x;
    //入力した
    cin >> x;
    cout << x << "だよ\n";
    cout << "ストリームを使った出力" << endl;
    cout << "this is the pen \n";

    //数値と文字列をずらす事ができる。
    cout << 1000 << "円";
    cout << 1000 << "\n" << "円です。";

    //整数
    printf("%d\n", 15);
    //小数
    printf("%f\n", 2.41);

    int r;
    r = 3;

    cout << r * r;
    return 0;
}
