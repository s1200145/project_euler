#include <bits/stdc++.h>
using namespace std;

int main(){
   int ans = 0;
   for(int i = 20; i < INT_MAX; i++){
      int count = 0;
      for(int j = 1; j <= 20; j++){
         if(i % j == 0){
            count++;
         }
      }
      if(count == 20){
         ans = i;
         break;
      }
   }
   cout << ans << endl;
}
