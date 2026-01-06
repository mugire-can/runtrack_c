# Runtrack C - Days 1 & 2

A comprehensive C programming project implementing fundamental string manipulation, pointer operations, and utility functions across multiple days.

## Description

This project is part of the Runtrack C learning series. It implements essential C functions from scratch, including:

**Day 1:** Character and string output, string utilities, character validation, trimming, and splitting
**Day 2:** Pointer operations, array manipulation, sorting, functional programming, and complete programs

## Project Structure

```
Jour01/
├── Job01/
│   ├── my_putchar.c    - Write a character to stdout using write()
│   └── my_putstr.c     - Write a string to stdout using my_putchar()
├── Job02/
│   └── my_strlen.c     - Get string length
├── Job03/
│   ├── char_is_digit.c - Check if character is a digit
│   └── str_is_digit.c  - Check if string contains only digits
├── Job04/
│   └── my_strcpy.c     - Copy source string to destination
├── Job05/
│   └── my_strdup.c     - Duplicate string with memory allocation
├── Job06/
│   └── my_strcmp.c     - Compare two strings
├── Job07/
│   └── trim.c          - Remove leading/trailing whitespace
└── Job08/
    └── split.c         - Split string into word array

Jour02/
├── Job01/
│   └── divide.c        - Divide integer by 2 using pointer
├── Job02/
│   └── swap.c          - Swap two integers using pointers
├── Job03/
│   └── array_clone.c   - Clone string array (with malloc)
├── Job04/
│   └── sort.c          - Bubble sort strings in ASCII order
├── Job05/
│   └── func_to_array.c - Apply function to each array element
├── Job06/
│   └── delete_str_array.c - Free string array and set to NULL
├── Job07/
│   └── job07.c         - Convert command args to lowercase and print
└── Job08/
    └── job08.c         - Trim, sort, and display command args
```

## Compilation

To compile individual functions or the entire project:

```bash
# Jour01 examples
gcc -c Jour01/Job01/my_putchar.c
gcc -c Jour01/Job01/my_putstr.c

# Jour02 examples
gcc -c Jour02/Job01/divide.c
gcc -c Jour02/Job02/swap.c

# Compile Job07 (requires Jour01 helpers)
gcc -o job07 Jour02/Job07/job07.c Jour01/Job02/my_strlen.c

# Compile Job08 (requires Jour01 and Jour02 helpers)
gcc -o job08 Jour02/Job08/job08.c Jour01/Job02/my_strlen.c Jour01/Job07/trim.c Jour01/Job06/my_strcmp.c
```

## Requirements

- C compiler (gcc, clang, or equivalent)
- POSIX-compliant system (for write() function)

## Learning Objectives

- ➔ C Base Knowledge
- ➔ String manipulation without standard library functions
- ➔ Memory management with malloc
- ➔ Pointer manipulation
- ➔ Character array processing


## Author

mugire-can
