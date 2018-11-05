#include <iostream>
#include <vector>
using namespace std;

#define N 1001

int arr[N][N];

int main(){
   int y, x, i;
   int sum;
   
   x = N/2;
   y = N/2;
   
   for(int i = 0; i < N; i++){
      for(int j = 0; j < N; j++){
         arr[i][j] = 0;
      }
   }
   
   i = 1;
   arr[y][x++] = i++;
   while(true){
      arr[y][x] = i;
      cout << y << ' ' << x << ' ' << i <<  endl;
      if(0 < x && x < N-1 && 0 < y && y < N-1){
         if(arr[y][x-1] != 0 && arr[y+1][x] == 0){
            ++y;
         }else if(arr[y-1][x] != 0 && arr[y][x-1] == 0){
            --x;
         }else if(arr[y+1][x] != 0 && arr[y][x+1] == 0){
            ++x;
         }else if(arr[y][x+1] != 0 && arr[y-1][x] == 0){
            --y;
         }
      }else{
         if(x == N-1 && y != N-1){
            ++y;
         }else if(y == N-1 && x != 0){
            --x;
         }else if(x == 0 && y != 0){
            --y;
         }else if(y == 0 && x != N-1){
            ++x;
         }
      }
      if(i == N * N){
         break;
      }
      ++i;
   }
   
   sum = 0;
   for(int i = 0; i < N; i++){
      sum += (arr[i][i] + arr[N-i-1][i]);
   }
   sum -= arr[N/2][N/2];
   cout << sum << endl;
}
