#include "../includes/iter.hpp"

int	main(void)
{
	{
		int array[5] = {1, 2, 3, 4, 5};
		size_t arraySize = 5;

		std::cout << "Original array: ";
		iter(array, arraySize, print);
		std::cout << std::endl;

		iter(array, arraySize, increment);

		std::cout << "Modified array: ";
		iter(array, arraySize, print);
		std::cout << std::endl;
	}
	{
		std::string array[2] = {"Hello", "World"};
		size_t arraySize = 2;
		
		std::cout << "Original array: ";
		iter(array, arraySize, print);
		std::cout << std::endl;
		
		iter(array, arraySize, increment);
		
		std::cout << "Modified array: ";
		iter(array, arraySize, print);
		std::cout << std::endl;

		std::cout << std::endl;
	}

    return 0;
}