*This project has been created as part of the 42 curriculum by `shannema.`* 

# Description
**libft** is a foundational project in the 42 curriculum that consists of recreating a
custom C standard library.  
The goal of this project is to strengthen understanding of the C language, memory
management, pointers, and low-level programming by reimplementing commonly used
functions from the standard C library, as well as creating additional utility functions
that will be reused throughout future projects.

This library serves as a personal toolbox, designed to be reliable, well-structured, and
fully compliant with the project specifications.

---

**Library Overview**

The libft library is divided into several categories of functions.

---

**1. Standard C Library Reimplementations**

Functions that replicate behavior from <ctype.h>, <string.h>, <stdlib.h>, etc.:

`ft_isalpha`

`ft_isdigit`

`ft_isalnum`

`ft_isascii`

`ft_isprint`

`ft_strlen`

`ft_memset`

`ft_bzero`

`ft_memcpy`

`ft_memmove`

`ft_strlcpy`

`ft_strlcat`

`ft_toupper`

`ft_tolower`

`ft_strchr`

`ft_strrchr`

`ft_strncmp`

`ft_memchr`

`ft_memcmp`

`ft_strnstr`

`ft_atoi`

`ft_calloc`

`ft_strdup`

---

**2. Additional Utility Functions**

Functions not present in the standard library but frequently useful:

`ft_substr`

`ft_strjoin`

`ft_strtrim`

`ft_split`

`ft_itoa`

`ft_strmapi`

`ft_striteri`

`ft_putchar_fd`

`ft_putstr_fd`

`ft_putendl_fd`

`ft_putnbr_fd`

---

**3. Bonus: Linked List Functions**

If the bonus part is implemented, the library also includes a linked list API using the
following structure:

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;


**Associated functions:**

`ft_lstnew`

`ft_lstadd_front`

`ft_lstsize`

`ft_lstlast`

`ft_lstadd_back`

`ft_lstdelone`

`ft_lstclear`

`ft_lstiter`

`ft_lstmap`

These functions provide basic list creation, traversal, modification, and deletion.

# Instructions

## How C Libraries (libft) Are Used

In C, a **library** is a collection of compiled functions that can be reused across
multiple programs. The **libft** project produces a **static library** (`libft.a`),
which contains precompiled object files of all implemented functions.

Using a library in C involves **three main steps**: inclusion, linking, and execution.

---

### 1. Include the Header File

The header file (`libft.h`) contains function prototypes and data structure definitions.
Including it allows the compiler to know how to correctly call the library functions.


#include "libft.h"
This inclusion is required in every source file that uses functions from libft.

### 2. Build Rules & Project Requirements

The **libft** project is written in **C** and strictly follows the **42 Norm**.  

The provided `Makefile` includes the required rules:

- `$(NAME)` / `all`
- `clean`
- `fclean`
- `re`
- `bonus` (when applicable)

Memory safety is a core requirement:
- Functions must not crash unexpectedly (segmentation fault, double free, etc.)
- All heap-allocated memory must be properly freed
- Memory leaks are not tolerated

If **bonus functions** are implemented, they are compiled via the `bonus` rule and kept
separate from the mandatory part, as required by the subject.

The resulting static library (`libft.a`) is designed to be reused in other projects by
copying the library sources and Makefile into a dedicated `libft/` directory and compiling
it through its own Makefile.

Although not submitted, writing custom test programs is strongly encouraged to validate
functionality and ensure reliability during peer evaluations and future reuse.

### 3. Execution

All source files compile with the flags `-Wall -Wextra -Werror`, and the library is built
using `cc` and `ar` without unnecessary relinking.
After successful compilation and linking, the resulting executable can be run normally:

`./a.out`

All libft functions are now available at runtime as part of the compiled program.

---

The 42 curriculum exclusively uses static libraries for reliability and portability. Libft, as a first project, is specifically important for any future 42 projects, because:

- It provides commonly used functions without relying on libc

- It ensures consistent behavior across projects

- It improves code readability and maintainability

- It reduces duplicated code

**Many later 42 projects (such as ft_printf, get_next_line, cub3D, and others)
depend directly on libft.**


# Resources

- Written in C, following the 42 Norm.

- No external libraries are used.

- Memory allocation is carefully managed to avoid leaks.

All functions are protected against undefined behavior when possible.

---

AI tools were used as learning assistants only, specifically for:

- Clarifying function behavior and edge cases, reviewing logic and identifying potential improvements

- Helping structure documentation (such as this README)

- All code was written, tested, and validated manually in accordance with 42 rules, and no
AI-generated code was copied directly into the project.