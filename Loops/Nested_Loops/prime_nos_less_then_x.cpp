#include <iostream>
using namespace std;

int main()
{
	bool isPrime = true;
	int X = 0;
	
	cout << "Enter X, for primes less than X: ";
	cin >> X;
	
	for (int N = 0; N < X; N++)
	{
		isPrime = true;

		if (N % 2 == 0) //even
		{
			if (N == 2)
				isPrime = true;
			else
				isPrime = false;
		}

		else //odd
		{
			if (N == 1)
				isPrime = false;

			else
			{
				for (int i = 3; i < N; i += 2) // e.g ,here for n=5, odd numbers from 3 to 5(n) are checked for modulo by N if here no modulo/divisor is found equals to 0 , so isprime=true.
				{
					if (N % i == 0)
					{
						isPrime = false;
						break;                // the loop breaks if any divisor is found before reaching N.
					}
				}
			}

		}

		if (isPrime == true)
			cout << N << endl;
		
	}
	return 0;
}