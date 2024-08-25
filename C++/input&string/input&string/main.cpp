#include <iostream>
#include <string>

int main() {
	std::string fullName;
	std::cout << "Enter your full name here: " << std::endl;
	std::getline(std::cin, fullName);
	std::cout << std::endl << "Your name is: " << fullName;
	return 0;
}