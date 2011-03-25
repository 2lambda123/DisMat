/**
 * DisMat - Functions.c
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
#include <math.h>
#include "Functions.h"


int subset(char zerosbst, int gen){
    int rslt;
    printf("Enter the mass elements number: ");
    scanf("%d", &gen);
jmp:
    printf("Want to get special subsets?(y/n)\n");
    scanf("%c", &zerosbst);
    if(zerosbst=('y' || 'Y')){
        int rslt = pow(2, gen) - 1;
        puts(rslt);
    }
    else if(zerosbst=('n' || 'N')){
        int rslt = pow(2, gen);
        puts(rslt);
    }
    else{
        puts("Enter y or n");
        goto jmp;
    }
}