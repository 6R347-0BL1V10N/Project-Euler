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
	int sumSqu = 0; //The sum of the squares of the first 100 natural numbers
	int squSum = 0; //The square of the sum of the first 100 natural numbers
	int result = 0; //The difference between sumSqu and squSum

	for (int i = 1; i < 100 + 1; i++)
	{
		sumSqu += std::pow(i, 2); // square all int between 1-100 and get sum
	}
	for (int ii = 1; ii < 100 + 1; ii++)
	{
		squSum += ii; //sum up 1-100..
	}
	squSum = std::pow(squSum, 2);//then square

	result = squSum - sumSqu; //result = difference of squSum and sumSqu

	std::cout << "sumSqu: " << sumSqu << std::endl << "squSum: " << squSum << std::endl << "result: " << result;

	std::cin.get(); //so program does not exit straight away
	return 1; //standard main exit #
}

/*
// output : 25164150
*/
