/*
//Author      : 6R347-0BL1V10N
//date        : August 9, 2018
//purpose     : ProjectEuler.net - Problem 7

//description : The four adjacent digits in the 1000-digit number that have the greatest product are 9 × 9 × 8 × 9 = 5832.

73167176531330624919225119674426574742355349194934
96983520312774506326239578318016984801869478851843
85861560789112949495459501737958331952853208805511
12540698747158523863050715693290963295227443043557
66896648950445244523161731856403098711121722383113
62229893423380308135336276614282806444486645238749
30358907296290491560440772390713810515859307960866
70172427121883998797908792274921901699720888093776
65727333001053367881220235421809751254540594752243
52584907711670556013604839586446706324415722155397
53697817977846174064955149290862569321978468622482
83972241375657056057490261407972968652414535100474
82166370484403199890008895243450658541227588666881
16427171479924442928230863465674813919123162824586
17866458359124566529476545682848912883142607690042
24219022671055626321111109370544217506941658960408
07198403850962455444362981230987879927244284909188
84580156166097919133875499200524063689912560717606
05886116467109405077541002256983155200055935729725
71636269561882670428252483600823257530420752963450

// Find the thirteen adjacent digits in the 1000-digit number that have the greatest product. What is the value of this product?
*/
#include <iostream>
#include <fstream>

int main()
{
	char thousandDigits[1000 + 1]; //1000 digits as characters + delim
	
	std::ifstream inputFile("input.txt"); //input holds the 1000 digit number in one line
	inputFile >> thousandDigits;       //populate with 1000 digit number

	int greatestProductStart = 0; //what position the first digit of the 13 highest producted numbers is
	unsigned long long sum = 0;  //the sum of the largest product of the 13 numbers
	unsigned long long T = 0;    //temp storage for sum;


	for (int i = 0; i < 988; i++) //loop 998 times to avoid memory leaks
	{
		T = int(thousandDigits[i]) -48; //int() around char to cast as int then - 48 because ascii starts at 48
		for (int ii = 1; ii < 13; ii++)
		{
			T *= int(thousandDigits[i + ii] - 48); //multiply next 13 digits
		}
		if (T > sum) //if greater then previous greatest, it is now new sum
		{
			sum = T;
			T = 0; //reset temp storage
			greatestProductStart = i; //store first position of largest sum
		}
		else
		{
			T = 0;
		}
	}

	//Printing to console
	for (int i = greatestProductStart; i < greatestProductStart + 13; i++)
	{
		std::cout << thousandDigits[i];
		if (i != greatestProductStart + 13 - 1)
		{
			std::cout << "*";
		}
	}
	std::cout <<  " = " << sum;
	std::cin.get(); //so program does not exit straight away
	return 1; //standard main exit #
}

/*
// output : 23514624000
*/
