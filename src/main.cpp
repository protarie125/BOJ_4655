#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	double x;
	cin >> x;
	while (0 < x) {
		auto c = int{ 1 };
		while (true) {
			auto d = double{ 0 };
			for (int i = 0; i < c; ++i) {
				d += 1.0 / (i + 2);
			}

			if (x <= d) {
				break;
			}

			++c;
		}

		cout << c << " card(s)\n";

		cin >> x;
	}

	return 0;
}