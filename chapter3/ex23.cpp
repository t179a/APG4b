#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> vecNum(N);
  for(int i = 0; i < N; i++){
    int tmp;
    cin >> tmp;
    vecNum.at(i) = tmp;
  }
  map<int, int> mapNum;
  for (int x : vecNum){
    if(mapNum.count(x)){
      mapNum.at(x)++;
    }
    else{
      mapNum[x] = 1;
    }
  }
  
  int ansSum = 0;
  int ansNum = 0;
  for (int x : vecNum){
    if(ansSum < mapNum.at(x)){
      ansSum = mapNum.at(x);
      ansNum = x;
    }
  }
  
  cout << ansNum << " " << ansSum << endl;
}
