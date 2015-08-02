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

#define CYCLIC_MOD (isCyclic != 0)

// ------------------------------ functions -----------------------------
/**
 *
 */
unsigned int stringCompare(const char* subStr1, const char* str2)
{
	puts("we're in!"); // todo remove
	for ( ; *subStr1 == *str2; ++subStr1, ++str2) // todo refine logic
	{
		printf("subStr1 = %c, str2 = %c\n", *subStr1, *str2); // todo remove
		if (*subStr1 == END_OF_STRING)
		{
			break;
		}
	}
	if (*str2 == END_OF_STRING)
	{
		printf("return 1\n"); // todo remove
		return 1;
	}
	printf("return 0\n"); // todo remove
	return 0;
}

/**
 *
 */
unsigned int cyclicMode(const char* str1, const char* str2) // todo
{
	printf("cyclic mod\n");
	unsigned int subStrCounter = 0;

	return 0;
}

/**
 * @brief
 */
unsigned int notCyclicMode(const char* str1, const char* str2)
{
	printf("non cyclic mod\n"); // todo remove
	unsigned int subStrCounter = 0;
	for ( ;*str1; ++str1)
	{
		if (*str1 == *str2)
		{
			subStrCounter += stringCompare(str1, str2);
		}
	}
//	printf("subStrCounter = %i", subStrCounter); // todo remove
	return subStrCounter;
}

unsigned int countSubStr(const char* str1, const char* str2, int isCyclic)
{
	const char *curStr1 = str1;
	printf("*str2: %c\n", *str2); // todo remove
	printf("str2: %s\n", str2); // todo remove
	printf("*str1: %c\n", *str1); // todo remove
	printf("str1: %s\n", str1); // todo remove
	printf("*curStr: %c\n", *curStr1); // todo remove
	printf("curStr: %s\n", curStr1); // todo remove
	printf("&curStr: %p\n", &curStr1); // todo remove
	printf("**(&curStr): %c\n", **(&curStr1)); // todo remove
//	if (str1 == END_OF_STRING || str2 == END_OF_STRING)
//	{
//		return 0;
//	}
//	else if (CYCLIC_MOD)
//	{
//
//		printf("*curStr: %c\n", *curStr1); // todo remove
//		return cyclicMode(curStr1, str2);
//	}
//	else
//	{
//		printf("*curStr: %c\n", *curStr1); // todo remove
//		printf("curStr: %s\n", curStr1); // todo remove
//		return notCyclicMode(&curStr1, str2);
//	}
	return 0; // todo remove
}

int main()
{
	char *str1 = "aaabcdefg";
	char *str2 = "aa";
	const char *thisStr1 = str1;
//	int j = stringCompare(thisStr1, str2);
	int j = notCyclicMode(thisStr1, str2);
	printf("*thisStr1: %c\n", *thisStr1);
//	countSubStr(str1, str2, 17);
//	int i = countSubStr(str1, str2, 0);

	printf("j = %i", j);
	return 0;
}