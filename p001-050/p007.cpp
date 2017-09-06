#include <bits/stdc++.h>
using namespace std;

bool isPrime(ulong);

int main(){
	vector<ulong> vec;

	ulong n = ULONG_MAX;
	for(ulong i = 2; i < sqrt(n); i++){
		if(isPrime(i) == true){
			cout << i << endl;
			vec.push_back(i);
		}
		if(vec.size() == 10001){
			break;
		}
	}
	cout << vec[10000] << endl;
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
