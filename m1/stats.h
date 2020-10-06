#ifndef STATS_H_INCLUDED
#define STATS_H_INCLUDED

/* Add Your Declarations and Function Comments here */



/**
 * @brief <A function that prints the statistics of an array including minimum, maximum, mean, and median.>
 *
 * <A function that prints the statistics of an array including minimum, maximum, mean, and median.>
 *
 * @param <ptrOfArray> <unsigned char pointer to an n-element data array>
 * @param <sizeOfArray> <An unsigned integer as the size of the array>
 *
 * @return <void>
 */
void print_statistics(unsigned char* ptrOfArray, unsigned int sizeOfArray);


/**
 * @brief <Given an array of data and a length, prints the array to the screen>
 *
 * <Given an array of data and a length, prints the array to the screen>
 *
 * @param <ptrOfArray> <unsigned char pointer to an n-element data array>
 * @param <sizeOfArray> <An unsigned integer as the size of the array>
 *
 * @return <void>
 */
void print_array(unsigned char* ptrOfArray, unsigned int sizeOfArray);


/**
 * @brief <Given an array of data and a length, returns the median value>
 *
 * <Given an array of data and a length, returns the median value>
 *
 * @param <ptrOfArray> <unsigned char pointer to an n-element data array>
 * @param <sizeOfArray> <An unsigned integer as the size of the array>
 *
 * @return <unsigned char median-value>
 */
unsigned char find_median(unsigned char* ptrOfArray, unsigned int sizeOfArray);


/**
 * @brief <Given an array of data and a length, returns the mean>
 *
 * <Given an array of data and a length, returns the mean>
 *
 * @param <ptrOfArray> <unsigned char pointer to an n-element data array>
 * @param <sizeOfArray> <An unsigned integer as the size of the array>
 *
 * @return <unsigned char mean-value>
 */
unsigned char find_mean(unsigned char* ptrOfArray, unsigned int sizeOfArray);


/**
 * @brief <Given an array of data and a length, returns the maximum>
 *
 * <Given an array of data and a length, returns the maximum>
 *
 * @param <ptrOfArray> <unsigned char pointer to an n-element data array>
 * @param <sizeOfArray> <An unsigned integer as the size of the array>
 *
 * @return <unsigned char max-value>
 */
unsigned char find_maximum(unsigned char* ptrOfArray, unsigned int sizeOfArray);


/**
 * @brief <Given an array of data and a length, returns the minimum>
 *
 * <Given an array of data and a length, returns the minimum>
 *
 * @param <ptrOfArray> <unsigned char pointer to an n-element data array>
 * @param <sizeOfArray> <An unsigned integer as the size of the array>
 *
 * @return <unsigned char min-value>
 */
unsigned char find_minimum(unsigned char* ptrOfArray, unsigned int sizeOfArray);


/**
 * @brief <Given an array of data and a length, sorts the array from largest to smallest.>
 *
 * <The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value.>
 *
 * @param <ptrOfArray> <unsigned char pointer to an n-element data array>
 * @param <sizeOfArray> <An unsigned integer as the size of the array>
 *
 * @return <unsigned char pointer to an the sorted n-element data array>
 */
unsigned char* sort_array(unsigned char* ptrOfArray, unsigned int sizeOfArray);


/**
 * @brief <Swapping two numbers in the memory using their pointers>
 *
 * <Swapping two numbers in the memory using their pointers>
 *
 * @param <ptrX> <unsigned char pointer to the first number>
 * @param <ptrY> <unsigned char pointer to the second number>
 *
 * @return <void>
 */
void swap(unsigned char* ptrX, unsigned char* ptrY);
#endif // STATS_H_INCLUDED
