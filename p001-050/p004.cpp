#include <bits/stdc++.h>
using namespace std;

bool kaibun_judge(int);

int main(){
	int num = 0;
	int max = INT_MIN;
	for(int i = 100; i < 1000; i++){
		for(int j = 100; j < 1000; j++){
			num = i * j;
			if(kaibun_judge(num) == true && max < num){
				max = num;
			}
		}
	}
	cout << max << endl;
}

bool kaibun_judge(int num){
	int arr[20];
	int count = 0;

	while(1){
		if(num <= 0){
			break;
		}
		arr[count++] = num % 10;
		num /= 10;
	}
	for(int i = 0; i < count/2; i++){
		if(arr[i] != arr[count-i-1]){
			return false;
		}
	}
	return true;
}
