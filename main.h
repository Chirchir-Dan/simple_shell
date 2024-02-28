#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

#define MAX_ARGS 100

/* Function prototypes */
char *read_input(void);
void display_prompt(void);
void execute_command(char *args[]);
void tokenize_input(char *input, char *args[]);
void print_error(void);

#endif /* MAIN_H */
