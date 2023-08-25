# C - More Functions, More Nested Loops Tasks :


## Mandatory


### isupper

0. Write a function that checks for uppercase character.
   - Prototype: `int _isupper(int c);`
   - Returns `1` if `c` is uppercase
   - Returns `0` otherwise
   - use the `0-main.c`

* FYI: The standard library provides a similar function: `isupper`. Run `man isupper` to learn more.

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-isupper.c -o 0-isuper	
   ```

### isdigit

1. Write a function that checks for a digit (`0` through `9`).
   - Prototype: `int _isdigit(int c);`
   - Returns `1` if `c` is a digit
   - Returns `0` otherwise
   - use the `1-main.c `

* FYI: The standard library provides a similar function: isdigit. Run man isdigit to learn more.

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-isdigit.c -o 1-isdigit
   ```

### Collaboration is multiplication

2. Write a function that multiplies two integers.
   - Prototype: `int mul(int a, int b);`
   - use the `2-main.c`

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-mul.c -o 2-mul
   ```

### The numbers speak for themselves

3. Write a function that prints the numbers, from `0` to `9`, followed by a new line.
   - Prototype: `void print_numbers(void);`
   - You can only use `_putchar` twice in your code
   - use the `3-main.c`

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-print_numbers.c -o 3-print_numbers
   ```

### I believe in numbers and signs

4. Write a function that prints the numbers, from `0` to `9`, followed by a new line.
   - Prototype: `void print_most_numbers(void);`
   - You can only use `_putchar` twice in your code
   - Do not print `2` and `4`
   - use the `4-main.c`

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_most_numbers.c -o 4-print_most_numbers
   ```

### Numbers constitute the only universal language

5. Write a function that prints 10 times the numbers, from `0` to `14`, followed by a new line.
   - Prototype: `void more_numbers(void);`
   - You can only use `_putchar` three times in your code
   - use the `5-main.c`

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-more_numbers.c -o 5-more_numbers
   ```

### The shortest distance between two points is a straight line

6. Write a function that draws a straight line in the terminal.
   - Prototype: `void print_line(int n);`
   - You can only use `_putchar` function to print
   - Where `n` is the number of times the character `_` should be printed
   - The line should end with a `\n`
   - If `n` is `0` or less, the function should only print `\n`
   - use the `6-main.c`

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-print_line.c -o 6-lines
   ```

### I feel like I am diagonally parked in a parallel universe

7. Write a function that draws a diagonal line on the terminal.
   - Prototype: `void print_diagonal(int n);`
   - You can only use `_putchar` function to print
   - Where `n` is the number of times the character `\` should be printed
   - The diagonal should end with a `\n`
   - If `n` is `0` or less, the function should only print `\n`
   - use the `7-main.c`

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_diagonal.c -o 7-diagonals
   ```

### You are so much sunshine in every square inch

8. Write a function that prints a square, followed by a new line.
   - Prototype: `void print_square(int size);`
   - You can only use `_putchar` function to print
   - Where `size` is the size of the square
   - Use the character `#` to print the square
   - If `size` is `0` or less, the function should print only a new line
   - use the `8-main.c`

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-print_square.c -o 8-squares
   ```

### Fizz-Buzz

9. The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.

. Write a program that prints the numbers from `1` to `100`, followed by a new line. But for multiples of three print `Fizz` instead of the number and for the multiples of five print `Buzz`. For numbers which are multiples of both three and five print `FizzBuzz`.
   - Each number or word should be separated by a space
   - You are allowed to use the standard library

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-fizz_buzz.c -o 9-fizz_buzz
   ```

### Triangles

10. Write a function that prints a triangle, followed by a new line.
   - Prototype: `void print_triangle(int size);`
   - You can only use `_putchar` function to print
   - Where `size` is the size of the triangle    
   - If `size` is `0` or less, the function should print only a new line
   - Use the character `#` to print the triangle
   - use the `10-main.c`

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-print_triangle.c -o 10-triangles
   ```



## Advanced



### The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known to be one of the most important and useful in arithmetic

11. The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081.

. Write a program that finds and prints the largest prime factor of the number 612852475143, followed by a new line.
   - You are allowed to use the standard library
   - Your program will be compiled with this command: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm`

### Numbers have life; they're not just symbols on paper

12. Write a function that prints an integer.
   - Prototype: `void print_number(int n);`
   - You can only use `_putchar` function to print
   - You are not allowed to use `long` 
   - You are not allowed to use arrays or pointers
   - You are not allowed to hard-code special values
   - use the `101-main.c`

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 101-main.c 101-print_number.c -o 101-print_numbers
   ```
