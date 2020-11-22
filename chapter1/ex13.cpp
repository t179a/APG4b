#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  vector<int> score(N);
  for(int i = 0; i < N; i++){
    cin >> score.at(i);
  }
  
  int sumOfScore = 0;
  for(int i = 0; i < N; i++){
	sumOfScore += score.at(i);
  }
  
  int avg = sumOfScore / N;
  
  for(int i = 0; i < N; i++){
    if(avg >= score.at(i)){
      cout << avg-score.at(i) <<endl;
    }
    if(avg < score.at(i)){
      cout << score.at(i) - avg << endl;
    }
  }
}
  
