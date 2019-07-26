#include <iostream>

using namespace std;

int main() {
	int N;
	int check;
	int arr[7] = { 1, 2, 4, 6, 11, 20, 29 };
	cin >> N;
	for (int cnt = 0; cnt < N; cnt++) {
		cin >> check;
		for (int x = 0; x < 7; x++) {
			if (check == arr[x]) {
				cout << 0 << endl;
				break;
			}
			else if (x == 6) {
				cout << 1 << endl;
				break;
			}
		}
	}

	return 0;
}