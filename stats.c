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
 * @file stats.c
 * @brief Application that performs statistical analytics on a dataset.
 *
 * This programm performs statistical analytics on a dataset. It calculates the 
 * mean value, median, minimum value and maximum value of a given array of
 * data and length. All Results will be printed to the screen. 
 * This programm is part of the week 1 Application in the "Introduction to 
 * Emebdded Systems Software and Development Enviromant" Coursera course.
 *
 * @author Sebastian Friedrich
 * @date 17.Aug.2022
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  unsigned char min, max, average, median;


  min = find_minimum(test, 40);
  printf ("Min = %d ", min);


}//END main


void print_statistics(){
    
}//END print_statistics()

void print_array(unsigned char * data, int size){
    
}//END print_array()

char find_median(unsigned char * data, int size){
    
}//END find_median()

char find_mean(unsigned char * data, int size){
    
}//END find_mean()

char find_maximum(unsigned char * data, int size){
    
    char maxValue = data[0]; //Init maxValue

    for( int i = 1 ; i < size ; i++ ){
        if( maxValue < data[i] ) 
            maxValue = data[i]; //Update maxValue
    } //END for()
    
    return maxValue;
    
}//END find_maximum()

char find_minimum(unsigned char * data, int size){
    
    unsigned char minValue = data[0]; //Init maxValue

    for( int i = 1 ; i < size ; i++ ){
        printf ("Array = %d ", data[i]);
        if( minValue > data[i] ) 
            minValue = data[i]; //Update maxValue
    } //END for()
    
    return minValue;
    
}//END find_minimum()

void sort_array(unsigned char * data, int size){
    
}//END sort_array()
