#include <iostream>

int main()
{
	int number = 2;
	std::cout << (2 * (number++)) << '\n';  // post-fix increment
	std::cout << number << "\n\n";
	
	int otherNumber = 2;
	std::cout << (2 * (++otherNumber)) << '\n';  // pre-fix increment
	std::cout << otherNumber << '\n';

	return 0;
}