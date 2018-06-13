#include <bits/stdc++.h>
using namespace std;

#define N 10

int main(){
  vector<int> v0, v1, v2;
  int count = 0;
  int sum = 0;
  size_t i;

  v0.clear();
  v1.clear();
  v2.clear();

  v0.push_back(1);
  v1.push_back(1);
  v2.push_back(0);

  count = 2;
  while(1){
    for(i = 0; i < v1.size(); i++){
      v2[i] = v0[i] + v1[i];
    }
    for(i = 0; i < v2.size(); i++){
      if(v2[i] >= 10){
        if(i == v0.size()-1){
          v2.push_back(v2[i] / 10);
          v2[i] %= 10;
        }else{
          v2[i+1] += v2[i] / 10;
          v2[i] %= 10;
        }
      }else{
        v2[i] = v2[i];
      }
    }
    for(i = 0; i < v1.size(); i++){
      if(v1.size() < v2.size()){
        v1.push_back(0);
      }
      if(v0.size() < v1.size()){
        v0.push_back(0);
      }
      v0[i] = v1[i];
      v1[i] = v2[i];
    }
    count++;
    if(v2.size() == 1000){
      break;
    }
  }
  cout << count << endl;
}
