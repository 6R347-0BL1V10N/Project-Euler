/*
//Author      : 6R347-0BL1V10N
//date        : August 9, 2018
//purpose     : ProjectEuler.net - Problem 7

//description : By listing the first six prime numbers:
//				2, 3, 5, 7, 11, and 13, we can see that
//				the 6th prime is 13.
//				What is the 10 001st prime number?
*/
#include <iostream>

bool isPrime(int num)
{
	for (int i = 2; i<num; i++)
		if (num % i == 0)       // if has no remainder, not prime
			return false;
	return true;
}

int main()
{
	int PrimeCount = 0; //how many time isPrime returns true
	int num = 0;        //num = i'th tested number

	for (int i = 2; PrimeCount < 10001; i++)
	{
		if (isPrime(i))
		{
			PrimeCount++;
		}
		if (PrimeCount == 10001)
		{
			num = i; //num = i'th tested num when count reaches 10001
		}
	}

	std::cout << "count" << PrimeCount << std::endl << "num: " << num;


	std::cin.get(); //so program does not exit straight away
	return 1; //standard main exit #
}

/*
// output : 104743
*/
