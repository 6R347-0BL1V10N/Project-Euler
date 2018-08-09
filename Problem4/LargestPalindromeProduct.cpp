/*
//Author      : 6R347-0BL1V10N
//date        : August 9, 2018
//purpose     : ProjectEuler.net - Problem 4

//description : A palindromic number reads the same both ways.
//				The largest palindrome made from the product of 
//				two 2-digit numbers is 9009 = 91 × 99.

//				Find the largest palindrome made from the product of two 3-digit numbers.
*/

//NOTE: reverse wont keep leading int(0); may not be fully functional

#include <iostream>

int reverse(int num) //flip number to check if same as first half of number
{
	int new_num = 0;
	while (num != 0)
	{
		int digit = num % 10;
		new_num = new_num * 10 + digit;
		num /= 10;
	}
	return new_num;
}

int main()
{
	int largest = 0;
	for (int n1 = 999; n1 >= 100; n1--)
	{
		for (int n2 = 999; n2 >= n1; n2--)
		{
			int product = n1 * n2;
			if (product > largest && reverse(product) == product)
			{
				largest = product;
			}
		}
	}
	std::cout << largest << std::endl;

	std::cin.get(); //so prgram does not exit straight away
	return 1; //standard main exit #
}

/*
// output : 906609
*/
