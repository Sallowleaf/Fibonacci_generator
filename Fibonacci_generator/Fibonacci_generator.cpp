// Fibonacci_generator.cpp : This program generates Fibonacci Sequence.
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<string>



std::vector<int> Fibonacci(int& a, int& b)
{
	int temp = 0;
	std::vector <int> Pile = { 0, 1 };

	for (int i = 0; i < 100; i++)
	{
		a + b == temp;

		Pile.push_back(temp);
		b == a;
		temp==b;

	}

	return Pile;
}

int main()
{
	std::cout << "Let's see what this Fibonacci buisness is about?\n";
	int First = 0;
	int Second = 1;
	std::vector<int> Result_Sequence;

	Result_Sequence = Fibonacci(First, Second);

	for (int i = 0; i <= Result_Sequence.size() - 1; i++)
	{
		std::cout << Result_Sequence[i] << ",";
	}
	std::cout << "\n";

	return 0;
}

