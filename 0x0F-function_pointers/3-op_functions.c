#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - sum of two integers
  * @a: integer to be added
  * @b: integer to be added
  *
  * Return: integer
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - difference of two integers
  * @a: integer
  * @b: integer
  *
  * Return: integer
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - product of two integers
  * @a: integer
  * @b: integer
  *
  * Return: integer
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - division of two numbers
  * @a: integer
  * @b: integer
  *
  * Return: integer
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
  * op_mod - modulus of a number
  * @a: integer
  * @b: integer
  *
  * Return: integer
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
