#include <iostream>

int main()
{
	int number_a, number_b;
	
	std::cin >> number_a >> number_b;
	
	std::cout << do_some_awesome_work(&number_a, &number_b);
}
