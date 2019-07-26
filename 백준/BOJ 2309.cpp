#include <iostream>
#include <list>

using namespace std;

int main() {
	int num;
	list<int> lt;
	list<int>::iterator iter;
	list<int>::iterator subiter;
	int cnt, cnt1;
	int sum = 0;
	int check = 0;

	for (cnt = 0; cnt < 9; cnt++) {
		cin >> num;
		lt.push_back(num);
		sum += lt.back();
	}
	lt.sort();
	iter = lt.begin();
	subiter = lt.begin();
	for (cnt = 0; cnt < 8; cnt++) {
		subiter = iter;
		subiter++;
		for (cnt1 = cnt + 1; cnt1 < 9; cnt1++) {
			if (sum - *iter - *subiter == 100) {
				lt.erase(iter);
				lt.erase(subiter);
				check = 1;
				break;
			}
			subiter++;
		}
		if (check == 1) break;
		iter++;
	}
	iter = lt.begin();
	for (cnt = 0; cnt < lt.size(); cnt++) {
		cout << *iter << endl;
		iter++;
	}
	return 0;
}