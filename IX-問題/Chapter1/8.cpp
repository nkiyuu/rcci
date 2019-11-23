#include <iostream>
#include <vector>

using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    int matrix[M][N], ans[M][N];
    vector<int> zero_row, zero_col;

    for(int i = 0; i < M; ++i) {
        for(int j = 0; j < N; ++j) {
            int l;
            cin >> l;
            matrix[i][j] = l;
            if(l == 0) {
                zero_row.push_back(i);
                zero_col.push_back(j);
            } 
        }
    }

    unique(zero_row.begin(), zero_row.end());
    unique(zero_col.begin(), zero_col.end());
    sort(zero_row.begin(), zero_row.end());
    sort(zero_col.begin(), zero_col.end());

    for(int i = 0; i < zero_row.size(); ++i) {
        for(int j = 0; j < N; ++j) {
            matrix[zero_row[i]][j] = 0;
        }
    }

    for(int i = 0; i < zero_col.size(); ++i) {
        for (int j = 0; j < M; ++j) {
            matrix[j][zero_col[i]] = 0;
        }
    }

    for(int i = 0; i < M; ++i) {
        for(int j = 0; j < N; ++j) {
            cout << matrix[i][j];
        }
        cout << endl;
    }
}