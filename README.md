# Runtrack C - Days 1, 2, 3 & 4

A comprehensive C programming project implementing fundamental string manipulation, pointer operations, arithmetic functions, struct handling, and utility programs across multiple days.

## Description

This project is part of the Runtrack C learning series. It implements essential C functions from scratch, including:

**Day 1:** Character and string output, string utilities, character validation, trimming, and splitting
**Day 2:** Pointer operations, array manipulation, sorting, functional programming, and complete programs
**Day 3:** String-to-number conversion, mathematical functions, and standalone programs
**Day 4:** Struct operations, dynamic memory management, and distance calculations

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

Jour03/
├── Job01/
│   └── my_atoi.c       - Convert string to integer
├── Job02/
│   └── my_itoa.c       - Convert integer to string (malloc)
├── Job03/
│   └── power.c         - Calculate base raised to power
├── Job04/
│   └── my_sqrt.c       - Calculate square root (integer only)
├── Job05/
│   └── job5.c          - Factorial program
├── Job06/
│   └── job6.c          - Fibonacci program
├── Job07/
│   └── itoa_hex.c      - Convert integer to hexadecimal (malloc)
└── Job08/
    └── sudoku_solver.c - Sudoku solver algorithm

Jour04/
├── Job01/
│   └── manhattan.c          - Manhattan distance between two points
├── Job02/
│   └── album.c              - Album struct with metadata
├── Job03/
│   └── realloc_album.c      - Dynamic realloc for album array (malloc)
├── Job04/
│   └── create_album.c       - Create new album linked list node
├── Job05/
│   └── push_back_album.c    - Insert album at end of linked list
├── Job06/
│   └── push_front_album.c   - Insert album at beginning of linked list
├── Job07/
│   └── album_del_one.c      - Delete one specific album from list (free)
└── Job08/
    └── sort_album_by.c      - Sort list using comparison function pointer
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

# Jour03 examples (functions)
gcc -c Jour03/Job01/my_atoi.c
gcc -c Jour03/Job02/my_itoa.c
gcc -c Jour03/Job03/power.c
gcc -c Jour03/Job04/my_sqrt.c

# Jour03 programs (standalone)
gcc -o Jour03/job5.exe Jour03/Job05/job5.c
gcc -o Jour03/job6.exe Jour03/Job06/job6.c

# Jour03 program execution
./Jour03/job5.exe 5      # Outputs: 120 (5! factorial)
./Jour03/job6.exe 6      # Outputs: 8 (6th fibonacci number)

# Jour04 examples (functions)
gcc -c Jour04/Job01/manhattan.c
gcc -c Jour04/Job02/album.c
gcc -c Jour04/Job03/realloc_album.c
gcc -c Jour04/Job04/create_album.c
gcc -c Jour04/Job05/push_back_album.c
gcc -c Jour04/Job06/push_front_album.c
gcc -c Jour04/Job07/album_del_one.c
gcc -c Jour04/Job08/sort_album_by.c
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
