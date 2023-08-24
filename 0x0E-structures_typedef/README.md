# C - Structures, Typedef Tasks :

 
 


## Mandatory





### Poppy

0. Define a new type `struct dog` with the following elements:
    - `name`, type = `char *`
    - `age`, type = `float`
    - `owner`, type = `char *`
    - use the `0-main.c`

    ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a	
    ```


### A dog is the only thing on earth that loves you more than you love yourself

1. Write a function that initialize a variable of type `struct dog`
    - Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`
    - use the `1-main.c`

    ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-init_dog.c -o b	
    ```


### A dog will teach you unconditional love. If you can have that in your life, things won't be too bad

2. Write a function that prints a `struct dog`
    - Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`
    - Format: see example bellow
    - You are allowed to use the standard library
    - If an element of `d` is `NULL`, print `(nil)` instead of this element. (if `name` is `NULL`, print `Name: (nil)`)
    - If `d` is `NULL` print nothing.
    - use the `2-main.c`

    ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_dog.c -o c	
    ```


### Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read

3. Define a new type `dog_t` as a new name for the type `struct dog`.
    - use the `3-main.c`

    ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d	
    ```


### A door is what a dog is perpetually on the wrong side of

4. WWrite a function that creates a new dog.
    - Prototype: `dog_t *new_dog(char *name, float age, char *owner);`
    - You have to store a copy of `name` and `owner`
    - Return `NULL` if the function fails
    - use the `4-main.c`

    ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-new_dog.c -o e	
    ```


### How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg

5. Write a function that frees dogs.
    - Prototype: `void free_dog(dog_t *d);`
    - use the `5-main.c`

    ```{bash}
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-free_dog.c 4-new_dog.c -o f	
    ```

