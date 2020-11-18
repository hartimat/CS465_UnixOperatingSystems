/* PALINDROME.C */

#include "palindrome.h"
#include "reverse.h"

/****************************************************************/
/* Returns 1 if str is a palindrome, 0 otherwise                */
/****************************************************************/
int palindrome (char str[])
{
   char reversedStr [100];
   reverse (str, reversedStr);                /* Reverse original */
   return (strcmp (str, reversedStr) == 0);   /* Compare the two */
}
