#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> v;
  size_t i;
  int size;
  int n, m, tmp;

  cin >> n;

  v.clear();
  tmp = n;
  while(1){
    m = tmp%10;
    v.push_back(m);
    tmp /= 10;
    if(tmp <= 0){
      break;
    }
  }

  for(size = n - 1; size >= 1; size--){
    for(i = 0; i < v.size(); i++){
      v[i] *= size;
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
  }

  int sum = 0;
  for(i = 0; i < v.size(); i++){
    sum += v[i];
  }
  cout << n << ' ' << sum << endl;
}
