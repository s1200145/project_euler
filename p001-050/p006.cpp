#include <bits/stdc++.h>
using namespace std;

int main(){
   int powsum = 0;
   int sumpow = 0;

   for(int i = 0; i <= 100; i++){
      powsum += i*i;
      sumpow += i;
   }
   sumpow *= sumpow;

   cout << sumpow << ' ' << powsum << endl;
}
