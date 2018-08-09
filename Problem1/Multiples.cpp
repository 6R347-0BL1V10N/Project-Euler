/*
//Author      : 6R347-0BL1V10N
//date        : August 9, 2018
//purpose     : ProjectEuler.net - Problem 1
//
//description : If we list all the natural numbers below 10 
//			  that are multiples of 3 or 5, we get 3, 5, 6 and 9.
//			  The sum of these multiples is 23. Find the sum of
//			  all the multiples of 3 or 5 below 1000.
*/

//PROGRAM START ~~JAX~~

#include <iostream>

int main()
{
	int sum = 0; //all multiples of 3 or 5 added together

	for (int i = 0; i < 1000; i++) //loop i 1000 times
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	std::cout << sum;

	std::cin.get(); //holds screen before program exit

	return 1; //standard main exit #
}

/*
// output : 233168
*/
