#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  // ここにプログラムを追記
  for(int i = 0; i < N; i++){
    string s;
    int num;
    cin >> s >> num;
    if(s == "/" && num == 0){
      cout << "error" << endl;
      break;
    }
    if(s == "+"){
      A += num;
    }
    else if(s == "-"){
      A -= num;
    }
    else if(s == "*"){
      A *= num;
    }
    else if(s == "/"){
      A /= num;
    }
    cout << i+1 << ":" << A << endl;
  }
}
