#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }

  // ここにプログラムを追記
  // (ここで"試合結果の表"の2次元配列を宣言)
  vector<vector<char>> data(N, vector<char>(N));
  for(int i = 0; i < M; i++){
    int x = B.at(i) - 1;
    int y = A.at(i) - 1;
    data.at(y).at(x) = 'o';
    data.at(x).at(y) = 'x';
  }
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      if(!(data.at(i).at(j) == 'o' || data.at(i).at(j) == 'x')){
        cout << '-';
      }
      else{
        cout << data.at(i).at(j);
      }
      if (j == N - 1) {
        cout << endl; // 末尾なら改行
      }
      else {
        cout << " ";  // それ以外なら空白
      }
    }
  }
}
