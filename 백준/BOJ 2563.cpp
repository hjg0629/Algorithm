#include <iostream>
#include <utility>

using namespace std;
int area[101][101];

int main() {
	int N; // first Input
	int moveFirst, moveSecond; // �Է� ��ǥ
	int count, count1; // �ݺ��� counting
	int finalarea = 0;// ����
	cin >> N;
	for (count = 0; count < N; count++) {
		cin >> moveFirst >> moveSecond;
		for (int x = moveFirst; x < moveFirst + 10; x++) {
			for (int y = moveSecond; y < moveSecond + 10; y++) {
				area[x][y] += 1;
			}
		}
	}
	for (count = 0; count <= 100; count++) {
		for (count1 = 0; count1 <= 100; count1++) {
			if (area[count][count1] != 0)
				finalarea++;
		}
	}
	cout << finalarea << endl;
	return 0;
}