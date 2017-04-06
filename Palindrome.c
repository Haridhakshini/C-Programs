#include <stdio.h>
int main()
{
    int n, reverse= 0, rem, original;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original= n;

    
    while( n!=0 )
    {
        rem = n%10;
        reverse = reverse*10 + rem;
        n /= 10;
    }


    if (original == reverse)
        printf("%d is a palindrome. \n", original);
    else
        printf("%d is not a palindrome. \n", original);
    
    return 0;
}