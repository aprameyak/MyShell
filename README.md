# MyShell

![C](https://img.shields.io/badge/C-00599C?logo=c&logoColor=white&style=for-the-badge)

## About

**MyShell** is a POSIX-compliant Unix shell written in **C**. It implements a basic read-eval-print loop that parses user input, dispatches built-in commands, and forks child processes to execute external programs using `execvp`.

## Features

- Interactive REPL that reads and executes commands from stdin
- Built-in `help` command listing available shell commands
- Built-in `pwd` to print the current working directory
- Built-in `cd` for changing directories
- Built-in `quit` to exit the shell cleanly
- External command execution via `execvp` with argument tokenization
- Support for absolute and relative executable paths

## Technology Stack

- **Language**: C
- **Platform**: Unix / POSIX
