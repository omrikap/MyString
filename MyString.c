	/**
 * @file MyString.c
 * @author  Omri Kaplan
 * @date 28 Jul 2015
 *
 * @brief todo
 *
 * @section DESCRIPTION
 * todo
 */
// ------------------------------ includes ------------------------------
#include "MyString.h"

// -------------------------- const definitions -------------------------
#define END_OF_STRING '\0'

// ------------------------------ functions -----------------------------
/**
 * @brief
 */
unsigned int cyclicMode(const char* str1, const char* str2);

/**
 * @brief
 */
unsigned int stringCompare(const char *subStr1, const char *str2, int isCyclic,
						   const char *headStr1);

/**
 * @brief
 */
unsigned int countSubStr(const char* str1, const char* str2, int isCyclic);


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
			return 0;
		}
	}
	return 1;
}

unsigned int countSubStr(const char* str1, const char* str2, int isCyclic)
{
	if (*str1 == END_OF_STRING || *str2 == END_OF_STRING)
	{
		return 0;
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
 * @brief This main method is just a driver. It
 */
int main()
{
	char *str1 = "aa";
	char *str2 = "";

	int i = countSubStr(str1, str2, 12);

	printf("i = %i", i);
	return 0;
}