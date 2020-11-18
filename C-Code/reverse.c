/* REVERSE.C */

#include "reverse.h"
#include <string.h>

/****************************************************************/
void reverse (char before[], char after[])
   /* before - array containing original string */
   /* after - array containing reversed string */

{
   int i;
   int j;
   int len;

   len = strlen (before); 
   j = len - 1;

   for (i = 0; j >= 0; j--, i++)   /* Reverse loop */
       after[i] = before[j];

   after[len] = '\0';          /* NULL terminate reversed string */
}
