# C - Recursion Tasks :

 

## Mandatory



### She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget

0. Write a function that prints a string, followed by a new line.
    - Prototype: `void _puts_recursion(char *s);`
    - use the `0-main.c`

* FYI: The standard library provides a similar function: `puts`. Run `man puts` to learn more.

### Why is it so important to dream? Because, in my dreams we are together

1. Write a function that prints a string in reverse.
    - Prototype: `void _print_rev_recursion(char *s);`
    - use the `1-main.c `

### Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange

2. Write a function that returns the length of a string.
    - Prototype: `int _strlen_recursion(char *s);`
    - use the `2-main.c`

* FYI: The standard library provides a similar function: `strlen`. Run `man strlen` to learn more.

### You mustn't be afraid to dream a little bigger, darling

3. Write a function that returns the factorial of a given number.
    - Prototype: `int factorial(int n);`
    - If `n` is lower than `0`, the function should return `-1` to indicate an error
    - Factorial of `0` is `1`
    - use the `3-main.c`

### Once an idea has taken hold of the brain it's almost impossible to eradicate

4. Write a function that returns the value of `x` raised to the power of `y`.
    - Prototype: `int _pow_recursion(int x, int y);`
    - If y is lower than `0`, the function should return `-1`
    - use the `4-main.c`

* FYI: The standard library provides a different function: `pow`. Run `man pow` to learn more.

### Your subconscious is looking for the dreamer

5. Write a function that returns the natural square root of a number.
    - Prototype: `int _sqrt_recursion(int n);`
    - If `n` does not have a natural square root, the function should return `-1`
    - use the `5-main.c`

* FYI: The standard library provides a different function: `sqrt`. Run `man sqrt` to learn more.

### Inception. Is it possible?

6. Write a function that returns `1` if the input integer is a prime number, otherwise return `0`.
    - Prototype: `int is_prime_number(int n);`
    - use the `6-main.c`




## Advanced





### They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything

7. Write a function that returns `1` if a string is a palindrome and `0` if not.
    - Prototype: `int is_palindrome(char *s);`
    - An empty string is a palindrome
    - use the `100-main.c`

### Inception. Now, before you bother telling me it's impossible...

8. Write a function that compares two strings and returns `1` if the strings can be considered identical, otherwise return `0`.
    - Prototype: `int wildcmp(char *s1, char *s2);`
    - `s2` can contain the special character `*`.
    - The special char `*` can replace any string (including an empty string)
    - use the `101-main.c`
