/**
* @file MyString.c
* @author  Omri Kaplan
* @date 9 Aug 2015
*
* @brief MyString
*
* @section DESCRIPTION
* A small program that finds appearances of a string in another string.
*/
// ------------------------------ includes ------------------------------
#include "MyString.h"

// -------------------------- const definitions -------------------------
#define END_OF_STRING '\0'
#define NOT_FOUND 0
#define FOUND 1

// ------------------------------ functions -----------------------------
/**
 * @brief Search in cyclic mod.
 * @param A pointer to the first string.
 * @param A pointer to the second string.
 */
unsigned int cyclicMode(const char* str1, const char* str2);

/**
 * @brief Compares two strings
 * @param A pointer to the first string.
 * @param A pointer to the second string.
 * @param The search mod (cyclic or not).
 * @param The head of the original first string.
 */
unsigned int stringCompare(const char *subStr1, const char *str2, int isCyclic,
						   const char *headStr1);

unsigned int cyclicMode(const char* str1, const char* str2)
{
	return stringCompare(str1, str2, 1, str1);
}

unsigned int stringCompare(const char *subStr1, const char *str2, int isCyclic,
						   const char *headStr1)
{
	for ( ; *str2; ++subStr1, ++str2)
	{
		if (*subStr1 == END_OF_STRING && isCyclic)
		{
			return cyclicMode(headStr1, str2);
		}
		else if (*subStr1 != *str2)
		{
			return NOT_FOUND;
		}
	}
	return FOUND;
}

unsigned int countSubStr(const char* str1, const char* str2, int isCyclic)
{
	if (*str1 == END_OF_STRING || *str2 == END_OF_STRING)
	{
		return NOT_FOUND;
	}
	unsigned int subStrCounter = 0;
	const char * headStr1 = str1;
	for ( ;*str1; ++str1)
	{
		if (*str1 == *str2)
		{
			subStrCounter += stringCompare(str1, str2, isCyclic, headStr1);
		}
	}
	return subStrCounter;
}

/*
 * @brief This main method is just a driver to test the code.
 */
int main()
{
	char *str1 = "aa";
	char *str2 = "";

	int i = countSubStr(str1, str2, 12);

	printf("i = %i", i);
	return 0;
}