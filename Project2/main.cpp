#include "adder.hpp"
#include <iostream>
using std::cout;
using std::endl;
int main()
{
	cout << adder_functions::add(9, 8) <<endl;
	cout << adder_functions::add(1.2f, 3.9f);
	return 0;
}