# C - More Singly Linked Lists Tasks :

 
 
 

## Mandatory





## Please use this data structure for this project:

```{bash}

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

```

### Print list

0. Write a function that prints all the elements of a `listint_t` list.
    - Prototype: `size_t print_listint(const listint_t *h);`
    - Return: the number of nodes
    - Format: see example
    - You are allowed to use `printf`
    - use the `0-main.c`
      
	```{bash}
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_listint.c -o a
	```


### List length

1. Write a function that returns the number of elements in a linked `listint_t` list.
    - Prototype: `size_t listint_len(const listint_t *h);`
    - use the `1-main.c`
      
	```{bash}
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-listint_len.c -o b
	```


### Add node

2. Write a function that adds a new node at the beginning of a `listint_t` list.
    - Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`
    - Return: the address of the new element, or `NULL` if it failed
    - use the `2-main.c`
      
	```{bash}
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_nodeint.c 0-print_listint.c -o c
	```


### Add node at the end

3. Write a function that adds a new node at the end of a `listint_t` list.
    - Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`
    -Return: the address of the new element, or `NULL` if it failed
    - use the `3-main.c`
      
	```{bash}
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_nodeint_end.c 0-print_listint.c -o d
	```
### Free list

4. Write a function that frees a `listint_t` list.
    - Prototype: `void free_listint(listint_t *head);`
    - use the `4-main.c`
      
	```{bash}
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-add_nodeint_end.c 0-print_listint.c 4-free_listint.c -o e
	```

### Free

5. Write a function that frees a `listint_t` list.
    - Prototype: `void free_listint2(listint_t **head);`
    - The function sets the `head` to `NULL`
    - use the `5-main.c`
      
	```{bash}
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c -o f
	```



###  Pop
6. Write a function that deletes the head node of a `listint_t` linked list, and returns the head node’s data (n).
    - Prototype: `int pop_listint(listint_t **head);`
    - if the linked list is empty return `0`
    - use the `6-main.c`
      
	```{bash}
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 6-pop_listint.c -o g
	```

### Get node at index

7. Write a function that returns the nth node of a `listint_t` linked list.
    - Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`
    - where `index` is the index of the node, starting at `0`
    - if the node does not exist, return `NULL`
    - use the `7-main.c`
      
	```{bash}
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 7-get_nodeint.c -o h
	```

###  Sum list
8. Write a function that returns the sum of all the data (n) of a `listint_t` linked list.
    - Prototype: `int sum_listint(listint_t *head);`
    - if the list is empty, return `0`
    - use the `8-main.c`
      
	```{bash}
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 3-add_nodeint_end.c 5-free_listint2.c 8-sum_listint.c -o i
	```

### Insert

9. Write a function that inserts a new node at a given position.
    - Prototype: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`
    - where `idx` is the index of the list where the new node should be added. Index starts at `0`
    - Returns: the address of the new node, or `NULL` if it failed
    - if it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`
    - use the `9-main.c`
      
	```{bash}
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 9-insert_nodeint.c -o j
	```

### Delete at index

10. Write a function that deletes the node at index `index` of a `listint_t` linked list.
    - Prototype: `int delete_nodeint_at_index(listint_t **head, unsigned int index);`
    - where `index` is the index of the node that should be deleted. Index starts at `0`
    - Returns: `1` if it succeeded, `-1` if it failed
    - use the `10-main.c`
      
	```{bash}
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 10-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 10-delete_nodeint.c -o k
	```




## Advanced




### Reverse list

11. Write a function that reverses a `listint_t` linked list.
    - Prototype: `listint_t *reverse_listint(listint_t **head);`
    - Returns: a pointer to the first node of the reversed list
    - You are not allowed to use more than `1` loop.
    - You are not allowed to use `malloc`, `free` or arrays
    - You can only declare a maximum of two variables in your function
    - use the `100-main.c`
      
	```{bash}
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 100-reverse_listint.c -o l
	```

### Print (safe version)

12. Write a function that prints a `listint_t` linked list.
    - Prototype: `size_t print_listint_safe(const listint_t *head);`
    - Returns: the number of nodes in the list
    - This function can print lists with a loop
    - You should go through the list only once
    - If the function fails, exit the program with status `98`
    - Output format: see example
    - use the `101-main.c`
      
	```{bash}
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-main.c 2-add_nodeint.c 101-print_listint_safe.c -o m
	```

### Free (safe version)

13. Write a function that frees a `listint_t` list.
    - Prototype: `size_t free_listint_safe(listint_t **h);`
    - This function can free lists with a loop
    - You should go though the list only once
    - Returns: the size of the list that was free’d
    - The function sets the `head` to `NULL`
    - use the `102-main.c`
      
	```{bash}
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-main.c 2-add_nodeint.c 101-print_listint_safe.c 102-free_listint_safe.c -o n
	```

### Find the loop

14. Write a function that finds the loop in a linked list.
    - Prototype: `listint_t *find_listint_loop(listint_t *head);`
    - Returns: The address of the node where the loop starts, or `NULL` if there is no loop
    - You are not allowed to use `malloc`, `free` or arrays
    - You can only declare a maximum of two variables in your function
    - use the `103-main.c`
      
	```{bash}
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 103-main.c 2-add_nodeint.c 101-print_listint_safe.c 102-free_listint_safe.c 103-find_loop.c -o o
	```
