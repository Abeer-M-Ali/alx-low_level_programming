# C - Even More Pointers, Arrays And Strings Tasks :



## Mandatory



### memset

0. Write a function that fills memory with a constant byte.
    - Prototype: `char *_memset(char *s, char b, unsigned int n);`
    - The `_memset()` function fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`
    - Returns a pointer to the memory area `s`
    - use the `0-main.c`

* FYI: The standard library provides a similar function: `memset`. Run `man memset` to learn more.

    ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-memset.c -o 0-memset	
    ```

### memcpy

1. Write a function that copies memory area.
    - Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`
    - The `_memcpy()` function fills the first `n` bytes from memory area `src` to memory area `dest`
    - Returns a pointer to `dest`
    - use the `1-main.c `

* FYI: The standard library provides a similar function: `memcpy`. Run `man memcpyt` to learn more.

    ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-memcpy.c -o 1-memcpy	
    ```

### strchr

2. Write a function that locates a character in a string.
    - Prototype: `char *_strchr(char *s, char c);`
    - Returns a pointer to the first occurrence of the character `c` in the string `s`, or `NULL` if the character is not found
    - use the `2-main.c`

* FYI: The standard library provides a similar function: `strchr`. Run `man strchr` to learn more.

    ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strchr.c -o 2-strchr	
    ```

### strspn

3. Write a function that gets the length of a prefix substring.
    - Prototype: `unsigned int _strspn(char *s, char *accept);`
    - Returns the number of bytes in the initial segment of `s` which consist only of bytes from `accept`
    - use the `3-main.c`

* FYI: The standard library provides a similar function: `strspn`. Run `man strspn` to learn more.

    ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-strspn.c -o 3-strspn	
    ```

### strpbrk

4. Write a function that searches a string for any of a set of bytes.
    - Prototype: `char *_strpbrk(char *s, char *accept);`
    - The `_strpbrk()` function locates the first occurrence in the string `s` of any of the bytes in the string `accept`
    - Returns a pointer to the byte in `s` that matches one of the bytes in `accept`, or `NULL` if no such byte is found
    - use the `4-main.c`

* FYI: The standard library provides a similar function: `strpbrk`. Run `man strpbrk` to learn more.

    ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-strpbrk.c -o 4-strpbrk	
    ```

### strstr

5. Write a function that locates a substring.
    - The `_strstr()` function finds the first occurrence of the substring `needle`  in the string `haystack`. The terminating null bytes (`\0`) are not compared
    - Returns a pointer to the beginning of the located substring, or `NULL` if the substring is not found.
    - use the `5-main.c`

* FYI: The standard library provides a similar function: `strstr`. Run `man strstr` to learn more.

    ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-strstr.c -o 5-strstr	
    ```

### Chess is mental torture

6. Write a function that prints the chessboard.
    - Prototype: `void print_chessboard(char (*a)[8]);`
    - use the `7-main.c`

    ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_chessboard.c -o 7-print_chessboard	
    ```

### The line of life is a ragged diagonal between duty and desire

7. Write a function that prints the sum of the two diagonals of a square matrix of integers.
    - Prototype: `void print_diagsums(int *a, int size);`
    - Format: see example
    - You are allowed to use the standard library
    - use the `8-main.c`

* Note that in the following example we are casting an `int[][]` into an `int*`. This is not something you should do. The goal here is to make sure you understand how an array of array is stored in memory.

    ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_diagsums.c -o 8-print_diagsums	
    ```


## Advanced



### Double pointer, double fun

8. Write a function that sets the value of a pointer to a char.
    - Prototype: `void set_string(char **s, char *to);`
    - use the `100-main.c`

    ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-set_string.c -o 100-set_string	
    ```

### My primary goal of hacking was the intellectual curiosity, the seduction of adventure

9. Create a file that contains the password for the `crackme2` executable.
    - Your file should contain the exact password, no new line, no extra space
    - `ltrace`, `ldd`, `gdb` and `objdump` can help
    - You may need to install the `openssl` library to run the `crakme2` program: `sudo apt install libssl-dev`
    - Edit the source list `sudo nano /etc/apt/sources.list` to add the following line: `deb http://security.ubuntu.com/ubuntu xenial-security main` Then `sudo apt update` and `sudo apt install libssl1.0.0`
