#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  // ここにプログラムを追記
  int sumA = 0;
  cout << "A:";
  while (sumA < A) {
    cout << "]";
    sumA++;
  }
  cout << endl;
  
  int sumB = 0;
  cout << "B:";
  while (sumB < B) {
    cout << "]";
    sumB++;
  }
  cout << endl;
}
