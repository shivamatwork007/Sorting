#include <iostream>
#include <vector>
#include<algorithm>
#include <functional>

int main() {
	std::vector<int> V = { 4,2,7,5,9,1 };
	std::sort(V.begin(), V.end(),std::greater<int>());

	std::sort(V.begin(), V.end(), [](int a, int b) {
		return a > b;
		});
	for (int value : V)
		std::cout << value << std::endl;
}