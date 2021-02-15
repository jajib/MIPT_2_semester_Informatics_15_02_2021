#include <iostream>

int main ()
{
	int numbers_quantity, all_sum = 0, result = 0;
	
	std::cin >> numbers_quantity;
	
	int* numbers = new int[numbers_quantity];
	
	for (int cnt = 0; cnt < numbers_quantity; cnt++)
	{
		std::cin >> numbers[cnt];
		all_sum += numbers[cnt];
	}
	
	for (int i = 0; i < numbers_quantity; i++)
	{
		if (numbers[i] >= 1 + (all_sum - all_sum % numbers_quantity)/ numbers_quantity)
		{
			result += numbers[i];
		}
	}
	
	std::cout << result;

	delete [] numbers;
}
