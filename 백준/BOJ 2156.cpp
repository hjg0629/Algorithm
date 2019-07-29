#include <iostream>
#include <algorithm>
using namespace std;

int arr[10001];
int dp[10001];
int n, check = 0;

pair<int,int> arr2[10001];

int cmp(int);

int main() {
	
	int count = 0;
	int max = 0;
	cin >> n;
	cin >> arr[0];
	if (n == 1) {
		cout << arr[0];
		return 0;
	}

	cin >> arr[1];
	dp[0] = arr[0];
	if (n == 2) {
		cout << arr[0] + arr[1];
		return 0;
	}

	dp[1] = dp[0] + arr[1];
	cin >> arr[2];
	if (arr[0] > arr[1] || arr[0] > arr[2]) {
		if (arr[1] > arr[2])
			dp[2] = arr[0] + arr[1];
		else
			dp[2] = arr[0] + arr[2];
	}
	else dp[2] = arr[1] + arr[2];
	if (n == 3) {
		cout << dp[2] << endl;
		return 0;
	}

	for (int x = 3; x < n; x++) {
		cin >> arr[x];
		dp[x] = cmp(x);
	}
	cout << dp[n-1] << endl;
	/*
	for (int x = 0; x < n; x++) {
		cin >> arr[x];
		sum += arr[x];
		arr1[x] = make_pair(arr[x],x);
	}
	sort(arr1, arr1 + n);
	
	for (int x = 0; x < n; x++) {
		cout << arr1[x].first << " " << arr1[x].second << endl;
	}

	while (true) {
		int
	}
	*/

	return 0;
}

int cmp(int x) {
	int a, b, c;
	a = dp[x - 3] + arr[x - 1] + arr[x];
	b = dp[x - 2] + arr[x];
	c = dp[x - 1];

	if (a > b) {
		if (a > c)
			return a;
		else return c;
	}
	else if (b > c)
		return b;
	else return c;
}