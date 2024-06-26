# 0x03. C - Debugging

This project contains tasks related to debugging in C programming. The main focus is on understanding and fixing errors in code to ensure it runs as intended.

## Files

- `0-main.c`: A test file to verify that the `positive_or_negative()` function correctly identifies if a number is positive, negative, or zero.
- `main.h`: A header file containing the prototype for the `positive_or_negative()` function.

## Description

### 0-main.c

This file contains the `main` function which tests the `positive_or_negative()` function. It sets an integer variable `i` to `0` and calls the `positive_or_negative(i)` function.

```c
#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
    int i;

    i = 0;  // Change the input value to 0
    positive_or_negative(i);

    return (0);
}
