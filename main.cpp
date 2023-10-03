#include <iostream>

#include <tuple>
#include <iostream>

#include "UnitTestFramework.hpp"

int sqr(int a) {
	return a * a;
}

void test_all() {
	TESTS_INIT;
	ASSERT(sqr, (2), 4);
	ASSERT(sqr, (3), 9);
	ASSERT(sqr, (4), 15);
}

int main() {
	test_all();
	std::cout << "Hello world!";
}