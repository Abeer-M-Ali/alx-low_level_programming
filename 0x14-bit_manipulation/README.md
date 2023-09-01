# C - Bit manipulation Tasks :

 
 
 

## Mandatory






### 0

0. Write a function that converts a binary number to an `unsigned int`.
    - Prototype: `unsigned int binary_to_uint(const char *b);`
    - where `b` is pointing to a string of `0` and `1` chars
    - Return: the converted number, or 0 if
        * there is one or more chars in the string `b` that is not `0` or `1`
        * `b` is `NULL`
    - use the `0-main.c`
      
	```{bash}
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o a
	```


### 1

1. Write a function that prints the binary representation of a number.
    - Prototype: `void print_binary(unsigned long int n);`
    - Format: see example
    - You are not allowed to use arrays
    - You are not allowed to use `malloc`
    - You are not allowed to use the `%` or `/` operators
    - use the `1-main.c`
      
	```{bash}
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_binary.c _putchar.c -o b
	```


### 10

2. Write a function that returns the value of a bit at a given index.
    - Prototype: `int get_bit(unsigned long int n, unsigned int index);`
    - where `index` is the index, starting from `0` of the bit you want to get
    - Returns: the value of the bit at index `index` or `-1` if an error occured
    - use the `2-main.c`
      
	```{bash}
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-get_bit.c -o c 
	```


### 11

3. Write a function that sets the value of a bit to `1` at a given index.
    - Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
    - where `index` is the index, starting from `0` of the bit you want to set
    - Returns: `1` if it worked, or `-1` if an error occurred
    - use the `3-main.c`
      
	```{bash}
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-set_bit.c -o d
	```
### 100

4. Write a function that sets the value of a bit to `0` at a given index.
    - Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`
    - where `index` is the index, starting from `0` of the bit you want to set
    - Returns: `1` if it worked, or `-1` if an error occurred
    - use the `4-main.c`
      
	```{bash}
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-clear_bit.c -o e
	```

### 101

5. Write a function that returns the number of bits you would need to flip to get from one number to another.
    - Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
    - You are not allowed to use the `%` or `/` operators
    - use the `5-main.c`
      
	```{bash}
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-flip_bits.c -o f
	```





## Advanced





###  Endianness
6. Write a function that checks the endianness.
    - Prototype: `int get_endianness(void);`
    - Returns: 0 if big endian, 1 if little endian
    - use the `100-main.c`
      
	```{bash}
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-get_endianness.c -o h
	```
    ```{bash}
	$ lscpu | head
	```