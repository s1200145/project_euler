#include <bits/stdc++.h>
using namespace std;
#define N 1000
int main(){
   int a, b, c;
   for(int a = 1; a < N; a++){
      for(int b = a+1; b < N; b++){
         for(int c = b+1; c < N; c++){
            if(a*a + b*b == c*c){
               if(a+b+c == 1000){
                  cout << a << " " << b << " " << c << endl;
                  cout << a*b*c << endl;
               }
            }
         }
      }
   }
}
