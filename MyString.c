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
//#define NOT_CYCLIC_MOD (isCyclic == 0) todo remove

// ------------------------------ functions -----------------------------
/**
 *
 */
unsigned int stringCompare(const char *subStr1, const char *str2)
{
	puts("we're in!"); // todo remove
	for ( ; *subStr1 == *str2; subStr1++, str2++)
	{
		printf("subStr1 = %c, str2 = %c\n", *subStr1, *str2); // todo remove
		if (*str2 == END_OF_STRING)
		{
			printf("return 1\n"); // todo remove
			return 1;
		}

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
	return 0;
}

/**
 * @brief
 */
unsigned int notCyclicMode(const char* str1, const char* str2)
{
	printf("non cyclic mod\n"); // todo remove
	unsigned int subStrCounter = 0;
	for ( ;*str1; str1++)
	{
		if (*str1 == *str2)
		{
			subStrCounter += stringCompare(str1, str2);
		}

		putchar(*str1);
		putchar('\n');
//		putchar(*str2);
//		putchar('\n');
//		putchar(*str2);
//		putchar('\n');
	}
	return subStrCounter;
}

unsigned int countSubStr(const char* str1, const char* str2, int isCyclic)
{
	if (str1 == END_OF_STRING || str2 == END_OF_STRING)
	{
		return 0;
	}
	else if (CYCLIC_MOD)
	{
		return cyclicMode(str1, str2);
	}
	else
	{
		return notCyclicMode(str1, str2);
	}
}

int main()
{
	char *str1 = "hi all";
	char *str2 = "all";
	countSubStr(str1, str2, 17);
	countSubStr(str1, str2, 0);
	return 0;
}