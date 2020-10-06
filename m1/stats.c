/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file stat.c
 * @brief Finding the statistics of an array
 *
 * <Add Extended Description Here>
 *
 * @author Alireza Yousefi
 * @date 10/05/2020
 *
 */



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "stats.h"


/* Size of the Data Set */
#define SIZE (40)

void main(void) {
    unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

//  /* Other Variable Declarations Go Here */
//  /* Statistics and Printing Functions Go Here */
    print_array(test, SIZE);
    print_statistics(test, SIZE);
}

void print_statistics(unsigned char* ptrOfArray, unsigned int sizeOfArray){
    printf("\n****************Here is the sorted array****************\n");
    print_array(sort_array(ptrOfArray,sizeOfArray), sizeOfArray);
    printf("\n*************Here is the stats of the array*************\n");
    printf("\nThe median is: %d\n", find_median(ptrOfArray,sizeOfArray));
    printf("\nThe mean is: %d\n", find_mean(ptrOfArray,sizeOfArray));
    printf("\nThe maximum is: %d\n", find_maximum(ptrOfArray,sizeOfArray));
    printf("\nThe minimum is: %d\n", find_minimum(ptrOfArray,sizeOfArray));
}

void print_array(unsigned char* ptrOfArray, unsigned int sizeOfArray){
    for(int i = 0; i < sizeOfArray; i++){
            printf("%d: %d\n", i, *ptrOfArray);
            ptrOfArray++;
    }
}

unsigned char find_median(unsigned char* ptrOfArray, unsigned int sizeOfArray){
    unsigned char* ptrOfSortedArray = sort_array(ptrOfArray,sizeOfArray);
    unsigned char median;
    if(sizeOfArray%2 == 0){
        median = 0.5 * ( *(ptrOfSortedArray + sizeOfArray/2) + *(ptrOfSortedArray + sizeOfArray/2 + 1) );
    }else{
        median = *(ptrOfSortedArray + (sizeOfArray/2));
    }
    return median;
}

unsigned char find_mean(unsigned char* ptrOfArray, unsigned int sizeOfArray){
    unsigned int mean = 0;
    for(int i = 0; i < sizeOfArray; i++){
        mean += *(ptrOfArray + i);
    }
    mean = mean / sizeOfArray;
    return mean;
}

unsigned char find_maximum(unsigned char* ptrOfArray, unsigned int sizeOfArray){
    unsigned char* ptrOfSortedArray = sort_array(ptrOfArray,sizeOfArray);
    unsigned char maximum = *ptrOfSortedArray;
    return maximum;
}

unsigned char find_minimum(unsigned char* ptrOfArray, unsigned int sizeOfArray){
    unsigned char* ptrOfSortedArray = sort_array(ptrOfArray,sizeOfArray);
    unsigned char minimum = *(ptrOfSortedArray + sizeOfArray - 1);
    return minimum;
}

unsigned char* sort_array(unsigned char* ptrOfArray, unsigned int sizeOfArray){
    unsigned char (*sortedArray)[sizeOfArray] = malloc(sizeOfArray);
    memcpy(sortedArray,ptrOfArray, sizeOfArray);
    unsigned char* ptrTemp = ptrOfArray;

    for(int i = 0; i < sizeOfArray; i++){
        ptrTemp = sortedArray;
        for(int j = 0; j < (sizeOfArray - 1); j++){
            if(*ptrTemp < *(ptrTemp + 1)){
                swap(ptrTemp,ptrTemp + 1);
            }
            ptrTemp++;
        }
    }
   return sortedArray;
}

void swap(unsigned char* ptrX, unsigned char* ptrY){
    unsigned char temp;
    temp = *ptrX;
    *ptrX = *ptrY;
    *ptrY = temp;
}
/* Add other Implementation File Code Here */

