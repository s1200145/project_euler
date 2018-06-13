#include <bits/stdc++.h>
using namespace std;

#define N 20
#define ELEM 4
void printDeque(const deque<int>& deq);

int main(){
  string filename = "p011.txt";
  int arr[N][N];
  int i, j;
  ifstream readFile;
  string readLineBuffer;
  deque<ulong> q;

  int multi;
  int max = 0;
  readFile.open(filename, ios::in);

  i = 0;
  j = 0;
  while(getline(readFile, readLineBuffer, ' ')){
    int tmp = atoi(readLineBuffer.c_str());
    arr[i][j] = tmp;
    if(j < N-1){
      j++;
    }else{
      j = 0;
      i++;
    }
  }
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  // horizontal
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N-3; j++){
      multi = arr[i][j] * arr[i][j+1] * arr[i][j+2] * arr[i][j+3];
      if(multi > max){
        max = multi;
      }
    }
  }
  // vertical
  for(int j = 0; j < N; j++){
    for(int i = 0; i < N-3; i++){
      multi = arr[i][j] * arr[i+1][j] * arr[i+2][j] * arr[i+3][j];
      if(multi > max){
        max = multi;
      }
    }
  }
  // Lower right diagonal
  for(int i = 0; i < N-3; i++){
    for(int j = 0; j < N-3; j++){
      multi = arr[i][j] * arr[i+1][j+1] * arr[i+2][j+2] * arr[i+3][j+3];
      if(multi > max){
        max = multi;
      }
    }
  }
  // Lower left diagonal
  for(int i = 0; i < N-3; i++){
    for(int j = 3; j < N; j++){
      multi = arr[i][j] * arr[i+1][j-1] * arr[i+2][j-2] * arr[i+3][j-3];
      if(multi > max){
        max = multi;
      }
    }
  }
  cout << max << endl;
}

void printDeque(const deque<int>& deq){
  const deque<int>::const_iterator itEnd = deq.end();
  for(deque<int>::const_iterator it = deq.begin(); it != itEnd; ++it){
    cout << *it << ' ';
  }
  cout << endl;
}
