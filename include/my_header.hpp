//  Copyright (c) 2018 Antoine Tran Tan
//  Copyright (c) 2018 Fabien Argelier

#ifndef MY_HEADER_HPP
#define MY_HEADER_HPP
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
#include <time.h>

void exo1 (void)
{
	long a = 2, b = 1, c = 0;
	while (a + b > 0)
	{
		a = a - 2;
		b = b + 1;
		c = c + 1;
	}
}

void exo2(void)
{
	long n = 3, fac = 1, i = 1;

	if (n > 0)
		while (i <= n)
		{
			fac = fac * i;
			i++;
		}
	else
		if (n < 0)
			fac = 0;
}





int essayer_code(unsigned short code)
{
	srand(time(NULL));
	static unsigned short guess = rand() % 10000;

	return (code == guess);
}

void exo3(void)
{
	unsigned short n = 0;
	while (essayer_code(n) != 1);
		n++;
		std::cout << n << std::endl;
}

unsigned short lancer_de(void)
{
	srand(time(NULL));
	return (rand() % 6) + 1;
}
void exo4(void)
{
	int nombreDePoints = 0;
	unsigned short n = 0;
	while (n != 1)
	{
		n = lancer_de();

		if (n == 2 || n == 4 || n == 6)
		{
			nombreDePoints = nombreDePoints + n;
		}
		else if (n == 3)
		{
			nombreDePoints = nombreDePoints * 2;
		}
		else if (n == 5)
		{
			nombreDePoints = 0;
		}
	}
}

#endif // MY_HEADER_HPP

