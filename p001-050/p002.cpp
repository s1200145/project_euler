#include <bits/stdc++.h>
using namespace std;

#define MAX 4000000 
int main(){
	int a[101];
	int count, sum, max;

	a[1] = 1;
	a[2] = 2;
	count = 2;
	sum = 0;

	cin >> max;
	for(int i = 3; i < 101; i++){
		a[i] = a[i-1] + a[i-2];
		if(a[i] > max){
			count = i;
			break;
		}
	}
	for(int i = 2; a[i] < max; i += 1){
		// cout << i << ' ' << a[i] << endl;
		if(a[i]%2 == 0){
			sum += a[i];
		}
		cout << sum << " " << a[i] << endl;
	}
	// while(1){
	// 	tmp = a[0] + a[1];
	// 	a[0] = a[1];
	// 	a[1] = tmp;
	// 	cout << count << " " << a[0] << endl;
	// 	cout << count << " " << a[1] << endl;
	// 	if(tmp > max){
	// 		break;
	// 	}
	// 	count += 1;
	// 	if(count % 2 == 0){
	// 		sum += a[1];
	// 		cout << "sum " << sum << endl;
	// 	}
	// }
	cout << sum << endl;
}
