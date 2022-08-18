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
 * @brief Header file for functions declarations and definitions to perform 
 * statistical analytics on datasets. 
 *
 * Contains all function declarations and macro definitions for the Week 1 
 * Application in the "Introduction to Emebdded Systems Software and 
 * Development Enviromant" Coursera course. These functions perform statistical
 * analytics on a given array of data and lenght and print the results.    
 *
 * @author Sebastian Friedrich
 * @date 17.Aug.2022
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief  Prints the statistics of an data set to the screen 
 *
 * This function prints the statistics of an array including minimum, maximum,
 * mean, and median to the screen using printf. The print order will be:
 *      -minimum
 *      -maximum
 *      -mean
 *      -median
 * 
 * @return : none
 */
void print_statistics();

/**
 * @brief  Prints the array to the screen
 *
 * Prints a given array of data and lenght to the screen using printf.
 *
 * @param char * data : Pointer to data set
 * @param int size    : No. of elemnts in the data set 
 *
 */
void print_array(unsigned char * data, int size);

/**
 * @brief  Finde the median of a data set
 *
 * This function calculates the median of a given array of data and lenght. If 
 * the number of elemts are even, then the median will be the average of two 
 * numbers in the middle of the sorted array. If the number of elements are 
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
 * @brief  Finde the mean of a data set
 *
 * This function calculates the mean value of a given array of data and lenght.   
 * The value of the mean will always be rounded down to the nearest integer.
 *
 * @param char * data : Pointer to data set
 * @param int size    : No. of elemnts in the data set 
 *
 * @return : Mean of given array rounded down to the nearest integer
 */
unsigned char find_mean(unsigned char * data, int size);

/**
 * @brief  Finde the maximum value of a data set
 *
 * This function calculates the maximum value of a given array of data and   
 * lenght. The maximum value will always be rounded down to the nearest 
 * integer.
 *
 * @param char * data : Pointer to data set
 * @param int size    : No. of elemnts in the data set 
 *
 * @return : Maximum value of given array rounded down to the nearest integer
 */
unsigned char find_maximum(unsigned char * data, int size);

/**
 * @brief  Finde the minimum value of a data set
 *
 * This function calculates the minimum value of a given array of data and 
 * lenght. The minimum value will always be rounded down to the nearest 
 * integer.
 *
 * @param char * data : Pointer to data set
 * @param int size    : No. of elemnts in the data set 
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
 * @param char * data : Pointer to data set
 * @param int size    : No. of elemnts in the data set 
 *
 */
void sort_array(unsigned char * data, int size);

#endif /* __STATS_H__ */
