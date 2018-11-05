#include<iostream>
#include<vector>

using namespace std;

int d(int a);

#define N 10000

int main(){
   int sum = 0;
   int flag = 0;
   vector<int> table(N+1);
   vector<int> an;
   an.clear();
   
   for(int i = 1; i < N; i++){
      table[i] = d(i);
   }
   
   for(int i = 1; i < N; i++){
      if(table[i] > N){
         continue;
      }
      if(table[table[i]] == i && table[i] != i){
         flag = 0;
         for(int j = 0; j < an.size(); j++){
            if(i == an[j]){
               flag = 1;
               break;
            }
         }
         if(flag != 1){
            an.push_back(i);
            an.push_back(table[i]);
         }
      }
   }
   
   for(int i = 0; i < an.size(); i++){
      cout << an[i] << endl;
      sum += an[i];
   }
   cout << endl << sum << endl;
   return 0;
}

int d(int a){
   int sum = 0;
   for(int i = 1; i <= a/2; i++){
      if(a%i == 0){
         sum += i;
      }
   }
   return sum;
}
