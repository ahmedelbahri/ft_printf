# ft_printf

**ft_printf** is a custom implementation of the `printf` function from the C standard library. This project aims to improve your understanding of variadic functions, formatted output, and memory management in C. It is part of the 42 School curriculum.

---

## About

The goal of the **ft_printf** project is to create your own version of the `printf` function, which is a common C library function used for formatted output. In this project, you will handle various specifiers and learn how to handle variable arguments using `va_list`, `va_start`, and `va_end`.

---

## Installation

To install **ft_printf**, follow these steps:

1. Clone this repository:
    ```bash
    git clone https://github.com/ahmedelbahri/ft_printf.git
    cd ft_printf
    ```

2. Compile the library:
    ```bash
    make
    ```

3. Optionally, to remove all compiled objects:
    ```bash
    make clean
    ```

4. To remove the library completely:
    ```bash
    make fclean
    ```

5. To recompile the library after cleaning:
    ```bash
    make re
    ```

---

## Usage

You can use **ft_printf** in your projects by including the `ft_printf.h` header file and linking the library when compiling your code. Example:

```c
#include "ft_printf.h"

int main() {
    int num = 42;
    char *str = "Hello, World!";
    
    ft_printf("The number is: %d\n", num);
    ft_printf("The string is: %s\n", str);
    
    return 0;
}
