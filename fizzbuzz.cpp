/*
 Classical FizzBuzz problem
 Compile with C++ 11: g++ -std::c++11 fizzbuzz.cpp -o fizzbuzz
 run: ./fizzbuz 100 to print list from 0 - 100
*/
#include <iostream>
#include <functional>

int main(int argc, char *argv[]) {

	if (argc < 2) {
		std::cout << "Usage: ./fizzbuzz [number]" << std::endl;
	} else {
		const std::function<void(int i)> funcs[] {
			[](int i) { std::cout << i << std::endl; },
			[](int ) { std::cout << "fizz\n"; },
			[](int ) { std::cout << "buzz\n"; },
			[](int ) { std::cout << "fizzbuzz\n"; }
		};
		int n = std::atoi(argv[1]);
		for (int i = 0; i<=n; ++i) {
			funcs[ (i % 3 == 0) + 2 * (i % 5 == 0) ](i);
		}
	}

	return 0;
}