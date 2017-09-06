#include <bits/stdc++.h>
using namespace std;

#define N 13

void printDeque(const deque<int>& deq);

int main(){
   string filename = "p008.txt";
   deque<int> q;
   int count;
   ulong multi;
   ulong max = 0;

   ifstream readFile;
   string readLineBuffer;
   readFile.open(filename, ios::in);
   getline(readFile, readLineBuffer);

   count = 0;
   for(size_t i = 0; i < readLineBuffer.length() - N; i++){
      if(q.size() < N){
         q.push_back(readLineBuffer[i] - '0');
      }
      if(q.size() == N){
         multi = 1;
         for(size_t i = 0; i < N; i++){
            multi *= q[i];
         }
         if(max < multi){
            max = multi;
         }
         q.pop_front();
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
