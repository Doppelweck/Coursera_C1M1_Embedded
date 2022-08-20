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
 * This program performs statistical analytics on a dataset. It calculates the 
 * mean value, median, minimum value and maximum value of a given array of
 * data and length. All results will be printed to the screen. 
 * This program is part of the week 1 application in the "Introduction to 
 * Emebdded Systems Software and Development Environment" Coursera course.
 *
 * @author Sebastian Friedrich
 * @date 17.Aug.2022
 *
 */



#include <stdio.h>
#include <math.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  unsigned char min, max, mean, median;
  
  /*Get all statistical properties of the array and print them out*/
  
  printf("Original data array : \n");
  print_array(test,SIZE);
  
  sort_array(test,SIZE);
  
  printf("Sorted data array : \n");
  print_array(test,SIZE);
  
  mean = find_mean(test, SIZE );
  
  median = find_median(test, SIZE);
  
  min = find_minimum(test, SIZE);
  
  max = find_maximum(test,SIZE);
  
  print_statistics(min, max, mean, median);
  
  
}//END main


void print_statistics( unsigned char min,  unsigned char max,  
    unsigned char mean,  unsigned char median){
    
    printf("Statistical properties of data array : \n");
    printf("\n");
    printf("Minimum Value : %d \n", min);
    printf("Maximum Value : %d \n", max);
    printf("Mean Value    : %d \n", mean);
    printf("Median Value  : %d \n", median);
    printf("\n");

}//END print_statistics()

void print_array(unsigned char * data, int size){
    
    printf("\n");
    
    int temp = 0;
    for( int i = 0 ; i < size ; i=i+8 ){
        temp = temp +1;
        if(temp == 3){
            printf("Data = |%03d %03d %03d %03d %03d %03d %03d %03d|\n"
                ,data[i],data[i+1],data[i+2],data[i+3],data[i+4],data[i+5]
                ,data[i+6],data[i+7] );
        }else{
            printf("       |%03d %03d %03d %03d %03d %03d %03d %03d|\n"
                ,data[i],data[i+1],data[i+2],data[i+3],data[i+4],data[i+5]
                ,data[i+6],data[i+7] );
        } //END if
    } //END for
    
    printf("\n");
    
}//END print_array()

unsigned char find_median(unsigned char * data, int size){
    
     unsigned char rvalue = size%2; //Check if No. of elements in data is even or not
    
    if(rvalue == 0){
        return (unsigned char)(data[size/2-1]+data[size/2])/2;
    }else{ //
        return data[( unsigned char)size/2];
    }
    
}//END find_median()

unsigned char find_mean(unsigned char * data, int size){
    
    int sum = 0;
    for ( int i = 0 ; i < size ; i++ ){
        sum = sum + data[i];
    }
    
    return (unsigned char)( sum / size );
    
}//END find_mean()

unsigned char find_maximum(unsigned char * data, int size){
    
    unsigned char maxValue = data[0]; //Init maxValue

    for( int i = 1 ; i < size ; i++ ){
        if( maxValue < data[i] ) 
            maxValue = data[i]; //Update maxValue
    } //END for()
    
    return maxValue;
    
}//END find_maximum()

unsigned char find_minimum(unsigned char * data, int size){
    
    unsigned char minValue = data[0]; //Init maxValue

    for( int i = 1 ; i < size ; i++ ){
        if( minValue > data[i] ){ 
            minValue = data[i]; //Update maxValue
        }
    } //END for()
    
    return minValue;
    
}//END find_minimum()

void sort_array(unsigned char * data, int size){
    
    unsigned char i, j, max_idx;
    unsigned char ptr;
    
    for(i = 0; i < size; i++){
        // Find the index of maximal element in  array
        max_idx = i; // Init max index to first element in array
        for( j = i+1 ; j < size; j++ ){
          if( data[j] > data[max_idx] ){
            max_idx = j;
          }
        }// END inner for
        
        // Swap the found maximum element with the first element
        if(max_idx != i){
            ptr = data[i]; 
            data[i] = data[max_idx];
            data[max_idx] = ptr; 
        }
            
    }// END outer for
    
    
}//END sort_array()
