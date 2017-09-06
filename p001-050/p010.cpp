#include <bits/stdc++.h>
using namespace std;

#define N 2000000
// #define N 10

bool isPrime(ulong);

int main(){
   vector<int> v;
   ulong sum = 0;
   for(int i = 2; i <= N; i++){
      if(isPrime(i)==true){
         v.push_back(i);
         cout << i << endl;
      }
   }

   for(size_t i = 0; i < v.size(); i++){
      sum += v[i];
   }
   cout << sum << endl;
}

bool isPrime(ulong n){
   if (n < 2) return false;
   else if(n == 2) return true;
   else if(n % 2 == 0) return false;
   double sqrtN = sqrt(n);

   for(int i = 3; i <= sqrtN; i += 2){
      if(n % i == 0){
         return false;
      }
   }
   return true;
}
