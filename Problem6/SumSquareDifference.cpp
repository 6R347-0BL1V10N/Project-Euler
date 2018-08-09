/*
//Author      : 6R347-0BL1V10N
//date        : August 9, 2018
//purpose     : ProjectEuler.net - Problem 6

//description : 

// The sum of the squares of the first ten natural numbers is,
// 12 + 22 + ... + 102 = 385

// The square of the sum of the first ten natural numbers is,
// (1 + 2 + ... + 10)2 = 552 = 3025

// Hence the difference between the sum of the squares of the first ten
// natural numbers and the square of the sum is 3025 − 385 = 2640.

// Find the difference between the sum of the squares of the first one
// hundred natural numbers and the square of the sum.
*/

#include <iostream>
#include <cmath>

int main()
{
	int sumSqu = 0;
	int squSum = 0;
	int result = 0;

	for (int i = 1; i < 10 + 1; i++)
	{
		sumSqu += std::pow(i, 2);
	}
	for (int ii = 1; ii < 10 + 1; ii++)
	{
		for (int iii = 1; iii < 10 + 1; iii++)
		{
			squSum += iii;
		}
		std::pow(std::pow(squSum, 2),2);
	}

	std::cout << sumSqu << std::endl << squSum;

	std::cin.get(); //so program does not exit straight away
	return 1; //standard main exit #
}

/*
// output : 
*/
