# Push_Swap

A sorting algorithm project that sorts data on a stack, with a limited set of instructions, using the lowest possible number of actions.

## Project Description

Push_Swap is a sorting algorithm project that requires implementing a program which calculates and displays the smallest sequence of operations that sorts integers received as arguments. The sorting must be done by manipulating two stacks using a limited set of operations.

### The Rules
- You have 2 stacks named `a` and `b`
- At the beginning:
  - Stack `a` contains a random number of positive or negative integers without duplicates
  - Stack `b` is empty
- The goal is to sort stack `a` in ascending order using only these operations:
  - `sa` (swap a): Swap the first 2 elements at the top of stack a
  - `sb` (swap b): Swap the first 2 elements at the top of stack b
  - `ss`: `sa` and `sb` at the same time
  - `pa` (push a): Take the first element at the top of b and put it at the top of a
  - `pb` (push b): Take the first element at the top of a and put it at the top of b
  - `ra` (rotate a): Shift up all elements of stack a by 1
  - `rb` (rotate b): Shift up all elements of stack b by 1
  - `rr`: `ra` and `rb` at the same time
  - `rra` (reverse rotate a): Shift down all elements of stack a by 1
  - `rrb` (reverse rotate b): Shift down all elements of stack b by 1
  - `rrr`: `rra` and `rrb` at the same time

## Features

- Efficient sorting algorithm implementation
- Error management
- Input parsing
- Stack manipulation
- Memory management optimization

## Usage

```bash
# Compile the program
make

# Compile the checker
make bonus

# Run with numbers as arguments
./push_swap 2 1 3 6 5 8

# Check if the operations sort the stack correctly
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker $ARG
