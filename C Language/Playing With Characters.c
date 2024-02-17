// Question:
/*You have to print the character ch in the first line.
Then print s in next line. In the last line print the sentence sen.*/

// Explanation:
/*I inputted a character, string and a sentence (used HackerRank told format).
Simply printed them.*/

//Solution:
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch, s[30], sen[100];  
    scanf("%c", &ch);
    scanf("%s", s);
    scanf("\n");
    scanf("%[^\n]%s", sen);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);
    return 0;
}
