//
//  Functions.cpp
//  DisMat
//
//  Created by Mahmut Bulut on 3/26/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include "Functions.h"

#define EVALUE 2.71828183
#define PIVALUE 3.14159265

int factorial( int n )
{
    if ( n <= 1 )
        return 1;
    else
        return  n * factorial( n-1 );
}

/*
class subset {
    char zerosbst;
    float rslt;int gen;
    
public:
    printf("Enter the mass elements number: ");
    scanf("%d", &gen);
    //Dönmeleri düzelt formatlamaları düzelt, cast ı düzelt
    //Elemanları binary string olarak döndür
    std::cout<<"Want to get  subsets?(y/n)\n"<<std::endl;
    zerosbst=getchar();
    switch (zerosbst){
            
        case 'y':
            rslt = pow(2, gen) - 1;
            int rslt = rslt;
            printf("%d", rslt);
            break;
        case 'n':
            rslt = pow(2, gen);
            //printf("%f", rslt);
            break;
        default:
            puts("Enter y or n char");
            break;
    };
    
*/
/*
int subset(void){
    char zerosbst;
    float rslt=0;int gen=0;
    printf("Enter the mass elements number: ");
    scanf("%d", &gen);
    //Dönmeleri düzelt formatlamaları düzelt, cast ı düzelt
    //Elemanları binary string olarak döndür
    printf("Want to get  subsets?(y/n)\n");
    zerosbst=getchar();
    switch (zerosbst){
        
        case 'y':
            rslt = pow(2, gen) - 1;
            int rslt = rslt;
            printf("%d", rslt);
            break;
        case 'n':
            rslt = pow(2, gen);
            //printf("%f", rslt);
            break;
        default:
            puts("Enter y or n char");
            break;
    }
    return EXIT_SUCCESS;
}
*/

unsigned int combinatorial(void){
    //Kullanıcı double girerse handle et
    unsigned int sbstGivenSize=0, glb=0, ksb=0;
jmp:
    puts("Enter global (n) set:");
    scanf("%d", &glb);
    glb = (double) glb;
    puts("Enter the k-subsets:");
    scanf("%d", &ksb);
    ksb = (double) ksb;
    if(glb<ksb){
        puts("Global set cannot be greater than k-subsets");
        goto jmp;
    }
    sbstGivenSize = factorial(glb)/(factorial(ksb)*factorial(glb-ksb));
    printf("Solution=%d", sbstGivenSize);
    return EXIT_SUCCESS;
    
}

unsigned int sigma(void){
    unsigned int i,inta=0, intb=0, intx=0, pw=0;
    puts("Usage:\nax+b is a linear system and a(pos.integer) and\nb(pos.integer) are induction rule of signum function\n");
    puts("Enter the a: ");
    scanf("%d", &inta);
    puts("Enter the b: ");
    scanf("%d", &intb);
    puts("Enter the x: ");
    scanf("%d", &intx);
    puts("Enter power of (ax+b) problem:");
    scanf("%d", &pw);
    unsigned int ttl=0;
    for(i=0; i<intx;i++){
        ttl+=(inta*intx+intb);
    }
    if(pw==1)printf("%d", ttl);
    if(pw>1){
        ttl=pow(ttl, pw);
        printf("%d", ttl);
    }
    if(pw==0)puts("1");
    return EXIT_SUCCESS;
}

unsigned int stirling(void){
    int strln=0;
    std::cout << "Enter the stirling n: " << std::endl;
    std::cin >> strln;
    std::cout << pow(strln/EVALUE, strln)*sqrt(2*PIVALUE*strln)<<std::endl;
    return EXIT_SUCCESS;
}

unsigned int IncExc(void){
    std::cout << "Enter the Mass number: " <<std::endl;
    std::cin >> 
}
