#include <iostream>

using namespace std;

char area[20][20];
int dp[26];
int R, C;
int check = 1;
int maxnum = 1;
void move(int, int);

int main() {

	int check = 0;
	cin >> R >> C;

	for (int x = 0; x < R; x++) {
		for (int y = 0; y < C; y++) {
			cin >> area[x][y];
		}
	}
	dp[(int)area[0][0] - 65] = 1;
	move(0, 0);
	cout << maxnum << endl;

	return 0;
}

void move(int x, int y) {
	if (x - 1 >= 0) {
		if (dp[(int)area[x - 1][y] - 65] == 0) {
			dp[(int)area[x - 1][y] - 65]++;
			check++;
			if (maxnum < check)
				maxnum = check;
			move(x - 1, y);
		}
	}
	if (x + 1 < R) {
		if (dp[(int)area[x + 1][y] - 65] == 0) {
			dp[(int)area[x + 1][y] - 65]++;
			check++;
			if (maxnum < check)
				maxnum = check;
			move(x + 1, y);
		}
	}
	if (y - 1 >= 0) {
		if (dp[(int)area[x][y - 1] - 65] == 0) {
			dp[(int)area[x][y - 1] - 65]++;
			check++;
			if (maxnum < check)
				maxnum = check;
			move(x, y - 1);
		}
	}
	if (y + 1 < C) {
		if (dp[(int)area[x][y + 1] - 65] == 0) {
			dp[(int)area[x][y + 1] - 65]++;
			check++;
			if (maxnum < check)
				maxnum = check;
			move(x, y + 1);
		}
	}
	dp[(int)area[x][y] - 65]--;
	check--;
}