#!/bin/bash
#include <stdio.h>

/*main - print the sring in the out function
 *
 * Description using the put function
 * this program prints "Programming is like building a multilingual puzzle
 * return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	print("size of a char: %ld bytes(s)\n", sizeof(c))
	print("size of an int: %ld bytes(s)\n", sizeof(i))
	print("size of a long int: %ld bytes(s)\n", sizeof(li))
	print("size of a long long int: %ld bytes(s)\n", sizeof(lli))
	print("size of a float: %ld bytes(s)\n", sizeof(f))
	return (0);
}
