#include <bits/stdc++.h>
using namespace std;

#define N 1000

int main(){
  vector<int> v;
  int count = 0;
  int sum = 0;
  size_t i;

  v.clear();
  v.push_back(1);

  while(count < N){
    for(i = 0; i < v.size(); i++){
      v[i] *= 2;
    }
    for(i = 0; i < v.size(); i++){
      if(v[i] >= 10){
        if(i == v.size()-1){
          v.push_back(v[i] / 10);
          v[i] %= 10;
        }else{
          v[i+1] += v[i] / 10;
          v[i] %= 10;
        }
      }else{
        v[i] = v[i];
      }
    }
    count++;
  }
  for(i = 0; i < v.size(); i++){
    sum += v[i];
  }
  cout << count << ' ' << sum << endl;
}
