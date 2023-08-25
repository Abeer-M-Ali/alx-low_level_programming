# C - Pointers, Arrays And Strings Tasks :


## Mandatory


### 98 Battery st.

0. Write a function that takes a pointer to an `int` as parameter and updates the value it points to to `98`.
   - Prototype: `void reset_to_98(int *n);`
   - use the `0-main.c`

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98	
   ```


### Don't swap horses in crossing a stream

1. Write a function that swaps the values of two integers.
   - Prototype: `void swap_int(int *a, int *b);`
   - use the `1-main.c`

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-swap.c -o 1-swap
   ```

### This report, by its very length, defends itself against the risk of being read

2. Write a function that returns the length of a string.
   - Prototype: `int _strlen(char *s);`
   - use the `2-main.c`

* FYI: The standard library provides a similar function: `strlen`. Run `man strlen` to learn more.

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strlen.c -o 2-strlen	
   ```

### I do not fear computers. I fear the lack of them

3. Write a function that prints a string, followed by a new line, to `stdout`.
   - Prototype: `void _puts(char *str);`
   - use the `3-main.c`

* FYI: The standard library provides a similar function: `puts`. Run `man puts` to learn more.

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-puts.c -o 3-puts	
   ```

### I can only go one way. I've not got a reverse gear

4. Write a function that prints a string, in reverse, followed by a new line.
   - Prototype: `void print_rev(char *s);`
   - use the `4-main.c`

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_rev.c -o 4-print_rev	
   ```

### A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes

5. Write a function that reverses a string.
   - Prototype: `void rev_string(char *s);`
   - use the `5-main.c`

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-rev_string.c -o 5-rev_string	
   ```

### Half the lies they tell about me aren't true

6. Write a function that prints every other character of a string, starting with the first character, followed by a new line.
   - Prototype: `void puts2(char *str);`
   - use the `6-main.c`

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-puts2.c -o 6-puts2	
   ```

### Winning is only half of it. Having fun is the other half

7. Write a function that prints half of a string, followed by a new line.
   - Prototype: `void puts_half(char *str);`
   - The function should print the second half of the string
   - If the number of characters is odd, the function should print the last `n` characters of the string, where `n = (length_of_the_string - 1) / 2`
   - use the `7-main.c`

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-puts_half.c -o 7-puts_half	
   ```

### Arrays are not pointers

8. Write a function that prints n elements of an array of integers, followed by a new line.
   - Prototype: `void print_array(int *a, int n);`
   - where `n` is the number of elements of the array to be printed
   - Numbers must be separated by comma, followed by a space
   - The numbers should be displayed in the same order as they are stored in the array
   - You are allowed to use printf
   - use the `8-main.c`

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_array.c -o 8-print_array	
   ```

### strcpy

9. Write a function that copies the string pointed to by src, including the terminating null byte (`\0`), to the buffer pointed to by `dest`.

   - Prototype: `char *_strcpy(char *dest, char *src);`
   - Return value: the pointer to `dest`
   - use the `9-main.c`

* FYI: The standard library provides a similar function: `strcpy`. Run `man strcpy` to learn more.

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-main.c 9-strcpy.c -o 9-strcpy	
   ```



## Advanced



### Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers

10. Write a function that convert a string to an integer.
   - Prototype: `int _atoi(char *s);`
   - The number in the string can be preceded by an infinite number of characters
   - You need to take into account all the `-` and `+` signs before the number
   - If there are no numbers in the string, the function must return `0`
   - You are not allowed to use `long`
   - You are not allowed to declare new variables of “type” array
   - You are not allowed to hard-code special values
   - We will use the `-fsanitize=signed-integer-overflow` gcc flag to compile your code.
   - use the `100-main.c`

* FYI: The standard library provides a similar function: `atoi`. Run `man atoi` to learn more.

   ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fsanitize=signed-integer-overflow 100-main.c 100-atoi.c -o 100-atoi	
   ```


###  Don't hate the hacker, hate the code

11. Create a program that generates random valid passwords for the program `101-crackme`.

   - You are allowed to use the standard library
   - You don’t have to pass the `betty-style` tests (you still need to pass the `betty-doc` tests)
   - man `srand`, `rand`, `time`
   - `gdb` and `objdump` can help

      ```{bash}
    gcc -Wall -pedantic -Werror -Wextra 101-keygen.c -o 101-keygen	
   ```
