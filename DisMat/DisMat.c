/**
 * DisMat - DisMat.c
 * Copyright (C) 2010-2011 Mahmut Bulut <mahmutbulut0@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "Functions.c"

/*
static unsigned int quit = 0;
static unsigned int verbose = 0;
*/

int main (int argc, const char * argv[])
{
    printf("---Welcome to DisMat---\n");
    printf("To find the shell usage info type /help\n");
    //subset();
    //combinatorial();
    sigma();
    return EXIT_SUCCESS;
}

void shell_usage() {
	printf("Usage:\n");
	printf("\t/upload <file>\tSend file to client.\n");
	printf("\t/exploit [file]\tSend usb exploit with optional payload\n");
	printf("\t/help\t\tShow this help.\n");
	printf("\t/exit\t\tExit interactive shell.\n");
}
/*
void parse_command(unsigned char* command, unsigned int size) {
	char* cmd = strdup(command);
	char* action = strtok(cmd, " ");
	if (!strcmp(cmd, "/exit")) {
		quit = 1;
	} else
        
        if (!strcmp(cmd, "/help")) {
            shell_usage();
        } else
            
        
	free(action);
}
*/