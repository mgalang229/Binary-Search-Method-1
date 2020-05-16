#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int x[] = {1,2,3,4,5};
	int n = sizeof(x)/sizeof(x[0]);
	int a = 0, b = n-1;
	int num;
	cin >> num;
	while(a <= b){
		int k = (a+b)/2;
		if(x[k] == num){
			cout << "index: " << k;
		}
		if(x[k] > num) b = k-1;
		else a = k+1;
	}
	cout << "\n";
	return 0;
}
