#include <bits/stdc++.h>
using namespace std;

bool isPrime(unsigned long);

int main(){
	vector<int> vec;
	int max = INT_MIN;

	ulong n = 600851475143;
	cin >> n;
	for(ulong i = 2; i < sqrt(n); i++){
		if(isPrime(i) == true){
			vec.push_back(i);
		}
	}
	for(size_t i = 0; i < vec.size(); i++){
		while(1){
			if(n % vec[i] == 0){
				n /= vec[i];
				max = vec[i];
			}else{
				break;
			}
		}
	}
	cout << max << endl;
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
