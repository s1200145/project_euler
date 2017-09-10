#include <bits/stdc++.h>
using namespace std;

#define N 50

void printVector(const vector<int>& vec);

int main(){
   string fileName = "p013.txt";
   vector<int> v(N, 0), val(N, 0);
   int i, j;
   ulong multi;
   ifstream readFile;
   string readLineBuffer;

   readFile.open(fileName, ios::in);

   while(getline(readFile, readLineBuffer)){
      for(i = readLineBuffer.size()-1; i >= 0; i--){
         val[readLineBuffer.size()-1-i] = readLineBuffer[i] - '0';
      }
      // printVector(val);
      
      for(i = 0; i < N; i++){
         v[i] += val[i];
      }
      // printVector(v);
      i = 0;
      while(i < v.size()){
         if(v[i] >= 10){
            if(i == v.size()-1){
               v.push_back(0);
            }
            v[i+1]++;
            v[i] %= 10;
         }else{
            v[i] = v[i];
         }
         i++;
      }
      // printVector(v);
   }

   for(i = v.size()-1; i >= 0; i--){
      cout << v[i];
   }
   cout << endl;
   cout << v.size() << endl;
}

void printVector(const vector<int>& vec){
   const vector<int>::const_iterator itEnd = vec.end();
   for(vector<int>::const_iterator it = vec.begin(); it != itEnd; ++it){
      cout << *it;
   }
   cout << endl;
}
