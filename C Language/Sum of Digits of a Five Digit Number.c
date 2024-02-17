// Question:
/*Given a five digit integer, print the sum of its digits.*/

// Explanation:
/*I took a number from the user, did an input validation that it's a 5 digit number,
and then applying the while loop, divided it with 10 until it's 0 and then took another variable "n2",
and added all the digits of the number to it. All test cases are passed.*/

//Solution:
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n,n2=0,remaind;
    scanf("%d", &n);
    if(n>=10000 && n<=99999){
    while(n!=0){
        remaind = n % 10;
        n2 = n2 + remaind;
        n = n/10;
    }
        printf("%d",n2);
    }
    else{
        printf("Invalid input");
    } 
    return 0;
}
