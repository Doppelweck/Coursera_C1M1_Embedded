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
 * @file stats.h
 * @brief Header file for function declarations and definitions to perform 
 * statistical analytics on datasets. 
 *
 * Contains all function declarations and macro definitions for the Week 1 
 * application in the "Introduction to Emebdded Systems Software and 
 * Development Enviromant" Coursera course. These functions perform statistical
 * analytics on a given array of data and length and print the results.    
 *
 * @author Sebastian Friedrich
 * @date 17.Aug.2022
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief  Prints the statistics of a dataset to the screen 
 *
 * This function prints the statistics of an array including minimum, maximum,
 * mean, and median to the screen using printf. The print order will be:
 *      -minimum
 *      -maximum
 *      -mean
 *      -median
 * 
 * @param int min     : Minimum value of array
 * @param int max     : Maxiumum value of array
 * @param int mean    : Mean value of array
 * @param int median  : Median value of arra
 * 
 * @return : none
 */
void print_statistics( unsigned char min,  unsigned char max,  
    unsigned char mean,  unsigned char median);

/**
 * @brief  Prints the array to the screen
 *
 * Prints a given array of data and length to the screen using printf.
 *
 * @param char * data : Pointer to dataset
 * @param int size    : No. of elements in the dataset
 * 
 * @return : none
 */
void print_array(unsigned char * data, int size);

/**
 * @brief  Finds the median of a dataset
 *
 * This function calculates the median of a given array of data and length. If 
 * the number of elements is even, then the median will be the average of two 
 * numbers in the middle of the sorted array. If the number of elements is 
 * odd, then the median will be the middle element of the sorted array. The 
 * value of the median will always be rounded down to the nearest integer. 
 *
 * @param char * data : Pointer to data set
 * @param int size    : No. of elemnts in the data set 
 *
 * @return : Median of given array rounded down to the nearest integer
 */
unsigned char find_median(unsigned char * data, int size);

/**
 * @brief  Finds the mean of a dataset
 *
 * This function calculates the mean value of a given array of data and length.   
 * The value of the mean will always be rounded down to the nearest integer.
 *
 * @param char * data : Pointer to dataset
 * @param int size    : No. of elements in the dataset 
 *
 * @return : Mean of given array rounded down to the nearest integer
 */
unsigned char find_mean(unsigned char * data, int size);

/**
 * @brief  Finde the maximum value of a dataset
 *
 * This function calculates the maximum value of a given array of data and   
 * length. The maximum value will always be rounded down to the nearest 
 * integer.
 *
 * @param char * data : Pointer to dataset
 * @param int size    : No. of elements in the dataset 
 *
 * @return : Maximum value of given array rounded down to the nearest integer
 */
unsigned char find_maximum(unsigned char * data, int size);

/**
 * @brief  Finds the minimum value of a dataset
 *
 * This function calculates the minimum value of a given array of data and 
 * length. The minimum value will always be rounded down to the nearest 
 * integer.
 *
 * @param char * data : Pointer to dataset
 * @param int size    : No. of elements in the dataset 
 *
 * @return : Minimum value of given array rounded down to the nearest integer
 */
unsigned char find_minimum(unsigned char * data, int size);

/**
 * @brief  Sorts the array from largest to smallest
 *
 * This function sorts a given array from largest to smallest using the 
 * selection sort algorithm. 
 *
 * @param char * data : Pointer to dataset
 * @param int size    : No. of elements in the dataset 
 *
 */
void sort_array(unsigned char * data, int size);

#endif /* __STATS_H__ */
