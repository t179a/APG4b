#include <bits/stdc++.h>
using namespace std;

int main(){
  int sum;
  cin >> sum;
  vector<pair<int, int>> data(sum);
  for(int i = 0; i < sum; i++){
    int num1;
    int num2;
    cin >> num1 >> num2;
    data.at(i) = make_pair(num2, num1);
  }
  
  sort(data.begin(), data.end());
  for(int i = 0; i < sum; i++){
    int b, a;
    tie(b, a) = data.at(i);  // b, a の順であることに注意
    cout << a << " " << b << endl;
  }
}
