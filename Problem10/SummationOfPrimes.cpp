/*
//Author      : 6R347-0BL1V10N
//date        : August 9, 2018
//purpose     : ProjectEuler.net - Problem 10

//description : The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
				Find the sum of all the primes below two million.
*/
#include <iostream>
#include <vector>

bool isPrime(int num) //check if prime number
{
	for (int i = 2; i < num; i++)
		if (num % i == 0)
			return false;
	return true;
}
//CAUTION: THIS WAY TOOK 11 MINUTES AND 23 SECONDS TO COMPLETE ON MY WEAK LAPTOP
int main()
{
	std::vector<int> primes;
	unsigned long long sum = 0;

	for (int i = 2; i < 2000001; i++)
	{
		if (isPrime(i))
		{
			primes.push_back(i);
		}
	}

	for (size_t ii = 0; ii < primes.size(); ii++)
	{
		sum += primes[ii];
	}

	std::cout << sum;

	std::cin.get(); //so program does not exit straight away
	return 1; //standard main exit #
}

/*
// output : 142913828922
*/
