// calc.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <sstream>

int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc != 3) return 1;

	std::string sa(argv[1]);
	std::string sb(argv[2]);

	std::stringstream ssa(sa);
	std::stringstream ssb(sb);

	ssa >> a;
	ssb >> b;

	c = a + b;
	std::cout << c;
}
