#include "lab1.h"


// Greatest Common Denominator
// PRE: a is a positive integer
// PRE: b is a positive integer
// POST: a and b are unchanged
// RETURN: the greatest common denominator of a and b.
int gcd(const int a, const int b)
{
	int num{ 0 };
	int denum{ 0 };
	int gcd{ 0 };

	if (a >= b) {
		num = a;
		denum = b;
	}
	else {
		num = b;
		denum = a;
	}

	if (num % denum == 0) {
		return denum;
	}
	else {
		int temp{ denum };
		denum = num % denum;
		num = temp;
	}

	while (num % denum != 0) {
		denum = num % denum;
	}

	return denum;
}

// Fibonacci
// PRE: n is a positive int greater than 0
// POST: n is not changed
// RETURN: the nth positive integer in the Fibonacci sequence.
long long fibonacci(const int n)
{

	if (n <= 2) {
		return 1;
	}

	return (fibonacci(n-1) + fibonacci(n-2));
}
