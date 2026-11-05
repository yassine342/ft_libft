*This project has been created as part of the 42 curriculum by yaait-sa*

# libft

## Description

**libft** is a project from the 42 curriculum. Its goal is to recreate a collection of standard C library functions and develop additional utility functions that can be reused in future C projects.

The project helps improve understanding of C programming, memory management, pointers, strings, linked lists, and dynamic memory allocation.

The library is compiled into a static library named `libft.a`, which can be linked to other C programs.

## Instructions

### Compilation

To compile the library, run:

```bash
make
```

This creates the static library `libft.a`.

Other available commands:

```bash
make clean
```

Removes the object files (`.o`).

```bash
make fclean
```

Removes the object files and the compiled library.

```bash
make re
```

Removes the previous build and recompiles the library.

### Using the library

Include the header file in your C source file:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
cc main.c -L. -lft -o program
```

Then execute it:

```bash
./program
```

Make sure that `libft.a` and `libft.h` are available at the appropriate paths.

## Library Description

The library contains reimplementations of standard C functions and additional utility functions.

### 1. Character Checks and Conversions

These functions check character properties or convert letter case.

- `ft_isalpha`: Checks whether a character is an alphabetic letter.
- `ft_isdigit`: Checks whether a character is a decimal digit.
- `ft_isalnum`: Checks whether a character is alphanumeric.
- `ft_isascii`: Checks whether a character belongs to the ASCII range.
- `ft_isprint`: Checks whether a character is printable.
- `ft_toupper`: Converts a lowercase letter to uppercase.
- `ft_tolower`: Converts an uppercase letter to lowercase.

### 2. String Functions

These functions manipulate and inspect strings.

- `ft_strlen`: Calculates the length of a string.
- `ft_strlcpy`: Copies a string into a destination buffer with a size limit.
- `ft_strlcat`: Appends a string to a destination buffer with a size limit.
- `ft_strchr`: Finds the first occurrence of a character in a string.
- `ft_strrchr`: Finds the last occurrence of a character in a string.
- `ft_strncmp`: Compares two strings up to a specified number of characters.
- `ft_strnstr`: Searches for a substring within a string, up to a specified length.
- `ft_strdup`: Creates a dynamically allocated duplicate of a string.
- `ft_substr`: Extracts a substring from a string.
- `ft_strjoin`: Concatenates two strings into a newly allocated string.
- `ft_strtrim`: Removes specified characters from the beginning and end of a string.
- `ft_split`: Splits a string into an array of strings using a delimiter.
- `ft_strmapi`: Applies a function to each character of a string and returns a new string.
- `ft_striteri`: Applies a function to each character of a string using its index.
- `ft_itoa`: Converts an integer into a string.

### 3. Memory Functions

These functions manipulate memory blocks.

- `ft_memset`: Fills a memory block with a specified byte.
- `ft_bzero`: Sets a memory block to zero.
- `ft_memcpy`: Copies bytes between memory regions that do not overlap.
- `ft_memmove`: Copies bytes safely when memory regions overlap.
- `ft_memchr`: Searches for a byte in a memory block.
- `ft_memcmp`: Compares two memory blocks.
- `ft_calloc`: Allocates memory for an array and initializes it to zero.

### 4. Conversion Functions

- `ft_atoi`: Converts the initial numeric portion of a string into an integer.

### 5. File Descriptor Output Functions

These functions write characters and strings to a specified file descriptor.

- `ft_putchar_fd`: Writes a character to a file descriptor.
- `ft_putstr_fd`: Writes a string to a file descriptor.
- `ft_putendl_fd`: Writes a string followed by a newline.
- `ft_putnbr_fd`: Writes an integer to a file descriptor.

### 6. Linked List Functions

These functions operate on singly linked lists using the `t_list` structure.

- `ft_lstnew`: Creates a new list node.
- `ft_lstadd_front`: Adds a node at the beginning of a list.
- `ft_lstsize`: Counts the nodes in a list.
- `ft_lstlast`: Returns the last node of a list.
- `ft_lstadd_back`: Adds a node at the end of a list.
- `ft_lstdelone`: Deletes one node and frees its content using a specified deletion function.
- `ft_lstclear`: Deletes and frees all nodes in a list.
- `ft_lstiter`: Applies a function to each node's content.
- `ft_lstmap`: Creates a new list by applying a function to each node's content.

## Resources

The following resources were useful for understanding the C language and implementing the library:

- [C Library - cppreference.com](https://en.cppreference.com/w/c)
- [GNU C Library Documentation](https://www.gnu.org/software/libc/manual/)
- [C Programming - Beej's Guide](https://beej.us/guide/bgc/)
- [42 School](https://42.fr/)

### AI Usage

AI tools, including ChatGPT, were used as learning and development aids during this project.

They helped explain C programming concepts such as pointers, memory allocation, string manipulation, linked lists, and function pointers. AI was also used to discuss function behavior, identify potential bugs, understand edge cases, and review implementation approaches.

The project code was written and tested by the student. AI assistance was used to support understanding and debugging rather than replace the learning process.

## Technical Choices

- **Language:** C
- **Compiler:** `cc`
- **Compilation flags:** `-Wall -Wextra -Werror`
- **Library format:** Static library (`libft.a`)
- **Header file:** `libft.h`
- **Build system:** Makefile

## License

This project was created for educational purposes as part of the 42 curriculum.