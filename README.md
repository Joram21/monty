# Monty Scripting Language (C Implementation)

![Monty Scripting Language](monty_logo.png)

Monty is a simple scripting language that is designed to be implemented in the C programming language. This README.md file provides an overview of the Monty scripting language, its features, and instructions on how to compile and run Monty programs using the C implementation.

## Table of Contents

- [Features](#features)
- [Syntax](#syntax)
- [Instructions](#instructions)
- [Usage](#usage)
- [Examples](#examples)
- [Contributing](#contributing)
- [License](#license)

## Features

Monty is a stack-based programming language with a minimalistic design and a limited set of instructions. Some of the key features of Monty include:

- **Stack Operations**: Monty supports stack operations like push, pop, and swap to manipulate a stack of integers.
- **Arithmetic Operations**: Monty provides arithmetic operations such as addition, subtraction, multiplication, and division.
- **Control Flow**: Monty supports control flow instructions like conditionals and loops.
- **File I/O**: Monty can read Monty scripts from files and execute them.

## Syntax

The Monty scripting language has a simple syntax. Each line in a Monty script represents an instruction. The syntax follows the following rules:

- Instructions are case-sensitive.
- Any text after a `#` character is considered a comment and is ignored.
- Each instruction is written on a new line.
- Arguments to instructions are space-separated.

Here's an example of the Monty scripting language syntax:

```plaintext
push 1
push 2
add
push 3
sub
```

## Instructions

Monty provides a limited set of instructions to manipulate the stack and perform arithmetic operations. Some of the commonly used instructions include:

- **push**: Pushes an element to the stack.
- **pop**: Removes the top element from the stack.
- **swap**: Swaps the top two elements on the stack.
- **add**: Adds the top two elements on the stack.
- **sub**: Subtracts the top element from the second element on the stack.
- **mul**: Multiplies the top two elements on the stack.
- **div**: Divides the second element on the stack by the top element.

Refer to the [Monty Language Specification](monty_language_specification.md) for a complete list of instructions and their usage.

## Usage

To compile and run Monty programs using the C implementation, follow these steps:

1. Clone the Monty repository:

```shell
$ git clone https://github.com/your-username/monty-c
```

2. Navigate to the cloned repository:

```shell
$ cd monty-c
```

3. Compile the Monty interpreter:

```shell
$ gcc -o monty *.c
```

4. Run a Monty script:

```shell
$ ./monty path/to/your/script.m
```

Replace `path/to/your/script.m` with the path to your Monty script file.

## Examples

Here are a few examples of Monty scripts:

1. Example 1: Adding two numbers

```plaintext
push 10
push 20
add
pall
```

Output:
```
30
```

2. Example 2: Calculating factorial

```plaintext
push 5
push 1
swap
label loop
mul
push 1
sub
dup
push 0
neq
pint
pall
```

Output:
```
120
```

For more examples, refer to the `examples` directory in this repository.

## Contributing

Contributions to the Monty
Joy Ngaru <joywanjikum@gmail.com>
Joram Oloo <oloojoram@gmail.com>
