#include <iostream>
#include <list>
using namespace std;


int main() {
	int N; // 입력 값
	int cnt = 0;
	int check;
	int end, loop = 0;
	int div, remain;
	list<int> lt;
	cin >> N;
	check = N;

	while (true) {// 입력값 길이 체크
		check /= 10;
		cnt++;
		if (check == 0)
			break;
	}

	end = cnt * 9;
	check = N;
	while (true) {
		check = check - 1;
		loop++;
		div = check;
		remain = 0;
		while (true) {// 탐색값 체크
			remain += (div % 10);
			div /= 10;
			if (div == 0) {
				if (loop == remain) {
					lt.push_back(check);
				}
				break;
			}


		}


		if (end == loop) {
			break;
		}
	}
	if (lt.empty()) {
		cout << "0";
	}
	else {
		lt.sort();
		cout << lt.front();
	}
	return 0;
}