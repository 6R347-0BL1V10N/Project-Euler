/*
//Author      : 6R347-0BL1V10N
//date        : August 9, 2018
//purpose     : ProjectEuler.net - Problem 5

//description : 2520 is the smallest number that can be 
				divided by each of the numbers from 1 to 10
				without any remainder.

				What is the smallest positive number that is 
				evenly divisible by all of the numbers from 1 to 20?
*/

#include <iostream>
#include <vector>

int main()
{
	/*
	int result = 1;

	while (result % 2 != 0 || result % 3 != 0 || result % 4 != 0 || result % 5 != 0 ||
		result % 6 != 0 || result % 7 != 0 || result % 8 != 0 || result % 9 != 0 ||
		result % 10 != 0 || result % 11 != 0 || result % 12 != 0 || result % 13 != 0 ||
		result % 14 != 0 || result % 15 != 0 || result % 16 != 0 || result % 17 != 0 ||
		result % 18 != 0 || result % 19 != 0 || result % 20 != 0)
	{
		result += 20;
	}

	output : 232792560

	NOTE: THIS WAY IS MUCH SLOWER! INCREMENTING EVERY NUMBER IS MUCH SLOWER THAN INCREMENTING
		  BY THE LARGEST NUMBER
	*/

	int result = 20; //smallest divisable number, start at 20, increment 20

	while (result % 2 != 0 || result % 3 != 0 || result % 4 != 0 || result % 5 != 0 ||
		result % 6 != 0 || result % 7 != 0 || result % 8 != 0 || result % 9 != 0 ||
		result % 10 != 0 || result % 11 != 0 || result % 12 != 0 || result % 13 != 0 ||
		result % 14 != 0 || result % 15 != 0 || result % 16 != 0 || result % 17 != 0 ||
		result % 18 != 0 || result % 19 != 0 || result % 20 != 0)
	{
		result += 20;
	}

	std::cout << result;

	std::cin.get(); //so program does not exit straight away
	return 1; //standard main exit #
}

/*
// output : 232792560
*/
