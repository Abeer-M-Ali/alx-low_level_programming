# C - Preprocessor Tasks :

 
 


## Mandatory





### Object-like Macro

0. Create a header file that defines a macro named `SIZE` as an abbreviation for the token `1024`.
    - use the `0-main.c`

    ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a	
    ```

### Pi

1. Create a header file that defines a macro named `PI` as an abbreviation for the token `3.14159265359`.
    - use the `1-main.c`

    ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c -o b	
    ```


### File name

2. Write a program that prints the name of the file it was compiled from, followed by a new line.
    - You are allowed to use the standard library

    ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 02-main.c -o cc	
    ```


### Function-like macro

3. Write a function-like macro `ABS(x)` that computes the absolute value of a number `x`.

    ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d	
    ```


### SUM

4. Write a function-like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`.

    ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c -o e	
    ```
