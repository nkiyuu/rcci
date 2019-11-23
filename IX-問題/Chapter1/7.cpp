#include <iostream>
#include <math.h>
#include <vector>

using namespace std;



int main() {
    int N;
    cin >> N;

    int picture[N][N], rotation[N][N];

    // 入力の読み込み
    for(int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            int col;
            cin >> col;
            picture[i][j] = col;
        }
    }

    // 実際に回転させる
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            rotation[j][N-i-1] = picture[i][j];
        }
    }

    // 回転させたものの表示
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            cout << rotation[i][j];
        }
        cout << endl;
    }

}
