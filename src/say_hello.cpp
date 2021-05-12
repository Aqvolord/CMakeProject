#include <iostream>

void sayHello() {
	std::cout << "Enter your name: " << std::endl;
	std::string u_name;
	std::cin >> u_name;
	std::cout << "Hi, " << u_name << std::endl;
}