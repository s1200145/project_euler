#include <bits/stdc++.h>
using namespace std;

#define N 20
#define ELEM 4
void printDeque(const deque<int>& deq);

int main(){
   string filename = "p013.txt";
   vector<int> v(50, 0);
   int i, j;
   ulong multi;
   ulong max = 0;
   ifstream readFile;
   string readLineBuffer;
   deque<ulong> q;

   readFile.open(filename, ios::in);

   while(getline(readFile, readLineBuffer)){
      // int tmp = atoi(readLineBuffer.c_str());
      
      int tmp[50];
      for(i = readLineBuffer.size()-1; i >= 0; i--){
         tmp[readLineBuffer.size()-1-i] = readLineBuffer[i] - '0';
      }
      for(i = 0; i < 50; i++){
         cout << tmp[i];
      }
      cout << endl;
      
      for(i = 0; i < 50; i++){
         
      }
      // arr[i][j] = tmp;
      // if(j < N-1){
      //    j++;
      // }else{
      //    j = 0;
      //    i++;
      // }
   }

   // for(i = 0; i < N; i++){
   //    for(j = 0; j < N; j++){
   //       cout << arr[i][j] << ' ';
   //    }
   //    cout << endl;
   // }
}

void printDeque(const deque<int>& deq){
   const deque<int>::const_iterator itEnd = deq.end();
   for(deque<int>::const_iterator it = deq.begin(); it != itEnd; ++it){
      cout << *it << ' ';
   }
   cout << endl;
}
