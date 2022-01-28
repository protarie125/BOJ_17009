#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a3, a2, a1;
	cin >> a3 >> a2 >> a1;
	int b3, b2, b1;
	cin >> b3 >> b2 >> b1;

	auto a = a3 * 3 + a2 * 2 + a1;
	auto b = b3 * 3 + b2 * 2 + b1;

	if (b < a) {
		cout << "A";
	}
	else if (a < b) {
		cout << "B";
	}
	else {
		cout << "T";
	}

	return 0;
}