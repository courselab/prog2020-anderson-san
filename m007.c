/* m007.c - Number of letters.

   This program reads the name of a person from the standard input
   and outputs the number of letters contained in the name (excluding
   blanks and punctuation). The name should be entered using only
   ASCII characters (26 letter of latim alphabet, no diacrictics).


   E.g.

      command line    : m007
      standard input  : John Doe
      expected output : 7

   Directions:

      Please, edit function lettercount();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 256

/* Count the number of letters in string s.*/
int letras (char s)
{
  int m = 0;
 
 if (s >= 'a' && s <= 'z')
  {
    m ++;
  }
  if (s >='A' && s <= 'Z')
  {
    m ++;
  }
  return m;
}

int lettercount (char *s)
{
  int total = 0;
  int i = 0;
  while(s[i]!= 0)
  {
    total = total + letras (s[i]);
    i ++;
  }
  return total;
}



/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);
  
  n = lettercount (name);

  printf ("%d\n", n);
  
  return 0;
}
