# C - Functions, Nested Loops Tasks :


## Mandatory


### _putchar

0. Write a program that prints `_putchar`, followed by a new line.
   - The program should return `0`

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar	
   ```

###  I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game

1. Write a function that prints the alphabet, in lowercase, followed by a new line.
   - Prototype: void `print_alphabet(void);`
   - You can only use `_putchar` twice in your code

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet	
   ```

### 10 x alphabet

2. Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
   - Prototype: `void print_alphabet_x10(void);`
   - You can only use `_putchar` twice in your code

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10	
   ```

### islower

3. Write a function that checks for lowercase character.
   - Prototype: `int _islower(int c);`
   - Returns `1` if `c` is lowercase
   - Returns `0` otherwise

* FYI: The standard library provides a similar function: `islower`. Run `man islower` to learn more.

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-islower.c -o 3-islower	
   ```

### isalpha

4. Write a function that checks for alphabetic character.
   - Prototype: `int _isalpha(int c);`
   - Returns `1` if `c` is a letter, lowercase or uppercase
   - Returns `0` otherwise

* FYI: The standard library provides a similar function: `isalpha`. Run `man isalpha` to learn more.

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-isalpha.c -o 4-isalpha	
   ```

### Sign

5. Write a function that prints the sign of a number.
   - Prototype: `int print_sign(int n);`
   - Returns `1` and prints `+` if `n` is greater than zero
   - Returns `0` and prints `0` if `n` is zero
   - Returns `-1` and prints `-` if `n` is less than zero

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-sign.c -o 5-sign	
   ```

### There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you

6. Write a function that computes the absolute value of an integer.
   - Prototype: `int _abs(int);`

* FYI: The standard library provides a similar function: `abs`. Run `man abs` to learn more.

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-abs.c -o 6-abs	
   ```

### There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important

7. Write a function that prints the last digit of a number.
   - Prototype: `int print_last_digit(int);`
   - Returns the value of the last digit

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_last_digit.c -o 7-last_digit	
   ```

### I'm federal agent Jack Bauer, and today is the longest day of my life

8. Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
   - Prototype: `void jack_bauer(void);`

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-24_hours.c -o 8-24	
   ```

### Learn your times table

9. Write a function that prints the 9 times table, starting with 0.
   - Prototype: `void times_table(void);`
   - Format: see example

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 9-main.c 9-times_table.c -o 9-times_table	
   ```

### a + b

10. Write a function that adds two integers and returns the result.
   - Prototype: `int add(int, int);`

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-add.c -o 10-add	
   ```

### 98 Battery Street, the OG

11. Write a function that prints all natural numbers from `n` to `98`, followed by a new line.
   - Prototype: `void print_to_98(int n);`
   - Numbers must be separated by a comma, followed by a space
   - Numbers should be printed in order
   - The first printed number should be the number passed to your function
   - The last printed number should be `98`
   - You are allowed to use the standard library

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 11-main.c 11-print_to_98.c -o 11-98	
   ```



## Advanced



### The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself

12. Write a function that prints the `n` times table, starting with 0.
   - Prototype: `void print_times_table(int n);`
   - If `n` is greater than `15` or less than `0` the function should not print anything
   - Format: see example

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 100-main.c 100-times_table.c -o 100-times_table	
   ```

### Nature made the natural numbers; All else is the work of women

13. If we list all the natural numbers below `10` that are multiples of `3` or `5`, we get `3`, `5`, `6` and `9`. The sum of these multiples is `23`. Write a program that computes and prints the sum of all the multiples of `3` or `5` below `1024` (excluded), followed by a new line.
   - You are allowed to use the standard library

### In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A

14.Write a program that prints the first 50 Fibonacci numbers, starting with `1` and `2`, followed by a new line.
   - The numbers must be separated by comma, followed by a space `,` 
   - You are allowed to use the standard library

### Even Liber Abbaci

15. Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with `1` and `2`, the first 10 terms will be: `1, 2, 3, 5, 8, 13, 21, 34, 55, 89`. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, write a program that finds and prints the sum of the even-valued terms, followed by a new line.
   - You are allowed to use the standard library

### In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+

16. Write a program that finds and prints the first 98 Fibonacci numbers, starting with `1` and `2`, followed by a new line.
   - The numbers should be separated by comma, followed by a space `,`
   - You are allowed to use the standard libraryshould not 
   - You are not allowed to use any other library (You can’t use `GMP` etc…)
   - You are not allowed to use `long long`, `malloc`, pointers, arrays/tables, or structures
   - You are not allowed to hard code any Fibonacci number (except for `1` and `2`)

