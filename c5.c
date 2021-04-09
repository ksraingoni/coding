#include <stdio.h>
int main()
 {
    int n, rev= 0,r, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original= n;

        while (n != 0) {
        r = n % 10;
        rev = rev * 10 + r;
        n = n/10;
    }

    
    if (original == rev)
        printf("number is a palindrome.");
    else
        printf("numberis not a palindrome.");
  
    return 0;
}

