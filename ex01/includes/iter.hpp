#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T* array, size_t len, void (*f)(const T&))
{
	for (size_t i = 0; i < len; ++i)
		f(array[i]);
}

template <typename T>
void	iter(T* array, size_t len, void (*f)(T&))
{
	for (size_t i = 0; i < len; ++i)
		f(array[i]);
}

template <typename T>
void	printer(const T& p)
{
	std::cout << p << " ";
}

void	increment(int& x)
{
	x += 1;
}

void    increment(std::string& str)
{
	str += "!";
}

#endif
