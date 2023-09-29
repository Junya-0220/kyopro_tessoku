/*
5
2 4 1 3
5 3 7

8
*/

#include <iostream>
#include <algorithm>
using namespace std;

int N, A[100009], B[100009];
int dp[100009];

int main() {
	// 入力
	cin >> N;
	for (int i = 2; i <= N; i++) {
	cin >> A[i];
	if (i == 2){
	cout << "\nAの配列(2の添字から値が入る)\n" ;
	}
	cout << A[i] << endl;
	}
	for (int i = 3; i <= N; i++) {
	cin >> B[i];
	if (i == 3){
	cout << "\nBの配列(3の添字から値が入る)\n" ;
	}
	cout << B[i] << endl;
	}

	// 動的計画法
	dp[1] = 0;
	dp[2] = A[2];
	for (int i = 3; i <= N; i++) {
		cout << "start dp[i]:" << dp[i] << endl;
		cout << "start dp[i - 1]:" << dp[i - 1] << endl;
		cout << "start A[i]:" << A[i] << endl;
		cout << "start dp[i - 2]:" << dp[i - 2] << endl;
		cout << "start B[i]:" << B[i] << endl;
		dp[i] = min(dp[i - 1] + A[i], dp[i - 2] + B[i]);
		cout << "end dp[i]:" << dp[i] << endl;
		cout << "end dp[i - 1]:" << dp[i - 1] << endl;
		cout << "end A[i]:" << A[i] << endl;
		cout << "end dp[i - 2]:" << dp[i - 2] << endl;
		cout << "end B[i]:" << B[i] << endl;
	}

	// 出力
	cout << dp[N] << endl;
	return 0;
}
