#include "main.h"
/**
 *wildcmp - compare two strings
 *@firstString: first string parameter pointer
 *@secondString: second string parameter pointer
 *Return: 0
 */
 int wildcmp(char *firstString, char *secondString)
 {
	 if (*firstString == '\0')
	 {
		 if (*secondString != '\0' && *secondString == '*')
		 {
			 return (wildcmp(firstString, secondString + 1));
		 }
		 return (*secondString == '\0');
	 }
	 if (*secondString == '*')
	 {
		 return (wildcmp(firstString + 1, secondString) || wildcmp(firstString, secondString + 1));
	 }
	 else if (*firstString == *secondString)
	 {
		 return (wildcmp(firstString + 1, secondString +1));
	 }
	 return (0);
 }
