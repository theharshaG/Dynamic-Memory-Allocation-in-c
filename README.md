# Dynamic-Memory-Allocation-in-c

 C Dynamic Memory Allocation Programs

## Overview

This repository contains C programs demonstrating Dynamic Memory Allocation concepts using `malloc()`, `calloc()`, `realloc()`, and `free()`. These programs help in understanding runtime memory management, pointer usage, dynamic arrays, and efficient memory handling in C programming.

The programs are useful for:

- Beginners learning C programming
- College laboratory exercises
- Coding interview preparation
- Logic-building practice
- Understanding memory management concepts
- Embedded systems programming fundamentals

---

## Programs Included

### 1. Dynamic Memory Allocation Using malloc()

This program dynamically allocates memory for a single integer using `malloc()` and stores a value.

#### Output Example

```text
50
```

#### Concepts Used

- malloc()
- Pointer variables
- Dynamic memory allocation
- free() function

---

### 2. Dynamic Array Using malloc()

This program dynamically allocates memory for multiple array elements based on user input.

#### Output Example

```text
Enter number of elements:
5

Enter elements:
10
20
30
40
50

Array elements:
10 20 30 40 50
```

#### Concepts Used

- Dynamic arrays
- malloc()
- User input handling
- Memory allocation checking

---

### 3. Memory Allocation Using calloc()

This program allocates memory using `calloc()` and demonstrates automatic initialization to zero.

#### Output Example

```text
0 0 0 0 0
```

#### Concepts Used

- calloc()
- Default memory initialization
- Dynamic memory allocation
- Pointers

---

### 4. Resizing Memory Using realloc()

This program dynamically resizes allocated memory using `realloc()` to increase array size during runtime.

#### Output Example

```text
Enter 3 elements:
10
20
30

Enter 2 more elements:
40
50

All elements:
10 20 30 40 50
```

#### Concepts Used

- realloc()
- Runtime memory resizing
- Dynamic arrays
- Memory management

---

## Technologies Used

- C Programming Language
- GCC Compiler
- VS Code
- CodeBlocks
- Turbo C

---

## Project Structure

```text
c-dynamic-memory-programs/
│
├── malloc_basic.c
├── dynamic_array_malloc.c
├── calloc_example.c
├── realloc_example.c
└── README.md
```

---

## How to Compile

Compile a program:

```bash
gcc filename.c -o output
```

Run:

```bash
./output
```

---

## Learning Outcomes

After completing these programs, you will understand:

- Dynamic memory allocation
- Pointer-based memory handling
- Runtime memory management
- Difference between malloc() and calloc()
- Memory resizing using realloc()
- Memory deallocation using free()

---

## Future Improvements

Possible future additions:

- Dynamic structures
- Dynamic matrix allocation
- Memory leak detection
- Linked list implementation
- Stack and queue using dynamic memory
- Embedded systems memory optimization

---

## Author

**Harsha G**

Learning:

- C Programming
- Embedded Systems
- Python Development
- IoT Systems
- Problem Solving
