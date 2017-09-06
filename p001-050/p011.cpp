#include <bits/stdc++.h>
using namespace std;

#define N 20
#define ELEM 4
void printDeque(const deque<int>& deq);

int main(){
   string filename = "p011.txt";
   int arr[N][N];
   int i, j;
   ulong multi;
   ulong max = 0;
   ifstream readFile;
   string readLineBuffer;
   deque<ulong> q;

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

   for(i = 0; i < N; i++){
      for(j = 0; j < N; j++){
         cout << arr[i][j] << ' ';
      }
      cout << endl;
   }

   // diagonal
   for(i = N-ELEM; i < N-ELEM; i++){
      for(j = N-ELEM;j
      // if(q.size() < ELEM){
      //    q.push_back(arr[i][i]);
      // }
      // if(q.size() == ELEM){
      //    multi = 1;
      //    for(size_t i = 0; i < N; i++){
      //       multi *= q[i];
      //    }
      //    if(max < multi){
      //       max = multi;
      //    }
      //    q.pop_front();
      // }
   }
   q.clear();
   // for(i = N - 1; i >= ELEM; i--){
   //    if(q.size() < ELEM){
   //       q.push_back(arr[i][i]);
   //    }
   //    if(q.size() == ELEM){
   //       multi = 1;
   //       for(size_t i = 0; i < N; i++){
   //          multi *= q[i];
   //       }
   //       if(max < multi){
   //          max = multi;
   //       }
   //       q.pop_front();
   //    }
   // }
   q.clear();
}

void printDeque(const deque<int>& deq){
   const deque<int>::const_iterator itEnd = deq.end();
   for(deque<int>::const_iterator it = deq.begin(); it != itEnd; ++it){
      cout << *it << ' ';
   }
   cout << endl;
}
