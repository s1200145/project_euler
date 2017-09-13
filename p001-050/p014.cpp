#include <bits/stdc++.h>
using namespace std;

#define N 1000000

int main(){
   int max = INT_MIN;

   for(int i = 1; i < N; i++){
      int count = 1;
      ulong n = i;
      while(1){
         if(n % 2 == 0){
            n = n/2;
         }else{
            n = 3*n + 1;
         }
         count++;
         if(n == 1){
            break;
         }
      }
      if(max < count){
         max = count;
         cout << i << " " << count << endl;
      }
   }
   cout << max << endl;
}
