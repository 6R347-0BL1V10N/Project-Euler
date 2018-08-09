/*
//Author      : 6R347-0BL1V10N
//date        : August 9, 2018
//purpose     : ProjectEuler.net - Problem 3

//description : The prime factors of 13195 are 5, 7, 13 and 29.
//		What is the largest prime factor of the number 600851475143 ?
*/
#include <iostream>

int main()
{

	long long number = 600851475143; //our number
	long long factor = 2;		 //Prime factor

	while (factor < number)
	{
		if (number % factor == 0)
		{
			number = number / factor;
			factor++;
		}
		else
		{
			factor++;
		}
	}
	std::cout << factor << std::endl;
	std::cin.get(); //so prgram does not exit straight away

	return 1; //standard main exit #
}

/*
// output : 6857
*/
