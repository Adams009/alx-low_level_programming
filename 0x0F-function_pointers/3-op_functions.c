#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - add two int
  * @a: int1
  * @b: int2
  *
  * Return: int1 + int2
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - sub two int
  * @a: int1
  * @b: int2
  *
  * Return: int1 - int2
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul -multiply two int
  * @a: int1
  * @b: int2
  *
  * Return: int1 * int2
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divide two int
  * @a: int1
  * @b: int2
  *
  * Return: int1 / int2
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - modul of two int
  * @a: int1
  * @b: int2
  *
  * Return: int1 % int2
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
