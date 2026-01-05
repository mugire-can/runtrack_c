# Runtrack C - Day 1

A comprehensive C programming project implementing fundamental string manipulation and utility functions.

## Description

This project is part of the Runtrack C learning series. It implements essential C functions from scratch, including:
- Character and string output (my_putchar, my_putstr)
- String utilities (my_strlen, my_strcpy, my_strdup, my_strcmp)
- Character validation (char_is_digit, str_is_digit)
- String trimming (trim)
- String splitting (split)

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
```

## Compilation

To compile individual functions or the entire project:

```bash
gcc -c Jour01/Job01/my_putchar.c
gcc -c Jour01/Job01/my_putstr.c
# etc.
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
