 if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n == 0)
    {
        printf("%d is zero\n", n);
    }
    else
    {
        printf("%d is negative\n", n);
    
   }
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c
