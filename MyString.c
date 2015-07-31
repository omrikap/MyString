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

#define CYCLIC_MOD (isCyclic == 1)
//#define NOT_CYCLIC_MOD (isCyclic == 0) todo remove

// ------------------------------ functions -----------------------------
/* general flow todo remove
 * 1. if str2 == 0 or str1 == 0, return 0.
 * 	non cyclic:
 * 1. for char in str1, check if the rest also equal
 * 2. if 2 chars aren't equal:
 * 3. if str1 end before str2, return 0.
 * 4. if str2 end counter ++.
 */

/**
 *
 */
unsigned int cyclicMode() // todo
{
	printf("cyclic mod\n");
	return 0;
}

/**
 * @brief
 */
unsigned int notCyclicMode()
{
	printf("non cyclic mod\n");
	return 0;
}

unsigned int countSubStr(const char* str1, const char* str2, int isCyclic)
{
	if (str1 == END_OF_STRING || str2 == END_OF_STRING)
	{
		return 0;
	}
	else if (CYCLIC_MOD)
	{
		return cyclicMode();
	}
	else
	{
		return notCyclicMode();
	}
}

int main()
{
	char *str1 = "hi";
	char *str2 = "all";
	int i = countSubStr(str1, str2, 1);
	int j = countSubStr(str1, str2, 0);
	return 0;
}