/*
//Author      : 6R347-0BL1V10N
//date        : August 9, 2018
//purpose     : ProjectEuler.net - Problem 9

//description : A Pythagorean triplet is a set of three natural numbers,
//				a < b < c, for which, a2 + b2 = c2

//				For example, 32 + 42 = 9 + 16 = 25 = 52.

//				There exists exactly one Pythagorean triplet for which
//				a + b + c = 1000.
//				Find the product abc.
*/
#include <iostream>

int main()
{
	bool pythagTriple = false;  //when found a * a + b * b == c * c, will be true;
	int a = 0, b = 0, c = 0; 
	int target = 1000;

	for (a = 1; a < target / 3; a++)
	{
		for (b = a; b < target / 2; b++)
		{
			c = target - a - b;

			if (a * a + b * b == c * c)
			{
				pythagTriple = true;
				break;
			}
		}
		if(pythagTriple)
		{
			break;
		}
	}

	std::cout << a << " " << b << " " << c << std::endl;
	std::cout << "Product: " << a * b * c;
	

	std::cin.get(); //so program does not exit straight away
	return 1; //standard main exit #
}

/*
// output : 31875000
*/
