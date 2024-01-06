// Question:
/*This challenge requires you to print Hello, World! on a single line, 
and then print the already provided input string to stdout. 
If you are not familiar with C, you may want to read about the printf() command.*/

// Explanation:
/*It was simple. I simply printed the Hello World statement
and then printed the string with string format specifier and that's it.*/

// Solution:
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
  	printf("Hello, World!\n");
    printf("%s", s);     
    return 0;
}

