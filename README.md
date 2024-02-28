# Simple Shell

## Overview
This is a simple UNIX command line interpreter written in C. It provides basic shell functionality, allowing users to execute commands interactively or non-interactively.

## Compilation
To compile the shell, use the following command:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh


## Usage
### Interactive Mode
To run the shell in interactive mode, simply execute the compiled binary:

/hsh


Once the shell is running, you can enter commands at the prompt (`$`). Type `exit` to exit the shell.

### Non-Interactive Mode
To run the shell in non-interactive mode, you can pipe commands into it or provide input from a file:

echo "/bin/ls" | ./hsh
cat test_ls_2 | ./hsh



## Functions
- `main.c`: Contains the main function responsible for the main loop of the shell.
- `prompt.c`: Displays the prompt to the user.
- `read_input.c`: Handles reading user input.
- `execute_command.c`: Executes the command entered by the user using `execve()`.
- `error_handling.c`: Handles errors encountered during command execution.

## Allowed Functions and System Calls
- (List of allowed functions and system calls)

## Allowed Functions and System Calls
- access
- chdir
- close
- closedir
- execve
- exit
- _exit
- fflush
- fork
- free
- getcwd
- getline
- getpid
- isatty
- kill
- malloc
- open
- opendir
- perror
- read
- readdir
- signal
- stat
- lstat
- fstat
- strtok
- wait
- waitpid
- wait3
- wait4
- write

## Testing
### Interactive Mode
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$


### Non-Interactive Mode

$ echo "/bin/ls" | ./hsh
hsh main.c shell.c
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c



## Author
Daniel Kipkosgei.


