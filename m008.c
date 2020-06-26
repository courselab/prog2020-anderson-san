/* m008.c - Lastname-Names.

   This program reads the name of a person from the standard input
   in the form 'First-name middle-names last-name' and outputs the 
   name in the form 'LAST-NAME, first-name middle-names'.
   The name should be entered using only ASCII characters (26 letter 
   of latim alphabet, no diacrictics).


   E.g.

      command line    : m008
      standard input  : John Little Bill Doe 
      expected output : DOE, John Little Bill

   Directions:

      Please, edit function lasname();
      do no not change function main().

*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX 256

/* Converts the string 's' from first-middle-last name 
   form into LAST-first-middle form. */

void lastname (char *s)
{
  int l, m, n, o, p;
  o = 0;
  p = 0;
  int status = 0;
  int pause = 0;
  char t[256];
  strcpy (t,s);
  n = strlen (t)-1;
  
  for(l = n; t[l]!= 32; l--)
  {
  } 
  m = l + 1;
  l = 0;
 
  for ( l = m; l!= n; l++)
  {
    s[o] = t[l];
    o++;
  } 
  for(l = 0; l <= o - 1; l++)
  {
  	if (s[l] >= 'a' && s[l] <= 'z')
  	{
  		s[l] = s[l] - 32;
  		
	  }
  }
  s[o] =',';
  o++;
  s[o] = 32;
  o++;
  l = 0;
  for(l = o; l!= n + 1; l++)
  {
  	s[l] = t[p];
  	p++;
  }
  l = 0;
  

}



/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);
  
  lastname (name);

  printf ("%s\n", name);
  
  return 0;
}
