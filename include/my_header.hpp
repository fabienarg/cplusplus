//  Copyright (c) 2018 Antoine Tran Tan
//  Copyright (c) 2018 Fabien Argelier

#ifndef MY_HEADER_HPP
#define MY_HEADER_HPP

int plusgrand(int a, int b, int c)
{
	if (a < b && b < c)
		return c;
	if (a < b && c < b)
		return b;
	if (b < a && c < a)
		return a;
}

#endif // MY_HEADER_HPP

