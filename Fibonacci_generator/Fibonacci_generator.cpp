// Fibonacci_generator.cpp : This program generates Fibonacci Sequence.
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<string>


template <typename X>
std::vector <X> Fibonacci (X a, X b)
{
	X temp = 0;
	std::vector <X> Pile = { a, b };

	for (int i = 0; i < 100; i++)
	{
		temp = a + b;

		Pile.push_back(temp);
		a = b;
		b=temp;
			
	}
	return Pile;
}

int main()
{
	std::cout << "Let's see what this Fibonacci buisness is about?\n";
	long double First = 0;
	long double Second = 1;
	auto Result_Sequence = Fibonacci(First, Second);

	for (int i = 0; i <= Result_Sequence.size() - 1; i++)
	{
		std::cout << std::to_string(Result_Sequence[i]) << ",\n";
	}
	std::cout << "\n";

	return 0;
}

