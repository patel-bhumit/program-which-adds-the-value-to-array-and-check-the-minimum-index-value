/**
 * File:    f5.Cpp
 *
 * Programmer:		Patel Bhumitkumar Kalpeshbhai
 * Assignment : Focused Assignment 5
 * First Version : 2023-02-24
 * student number : 8847159
 * Discription:
 *
 *   This file contains code whih adds the value to array
 * and check the minimum index value
 *
 */

#include<iostream>

using namespace std;


void modifyArrayValue(int arr[], int n);
int minArrayValue(int arr[],int n);

int main()
{
	const int i = 10;
	int arr[10]{}; // initialize array with zeros

	cout << "Enter 10 numbers :";
	modifyArrayValue(arr, i); // call the modifyArray() function

	cout << "The minimum value is at index ";
	printf("the minimum value is at index %d", minArrayValue(arr, i));

	return 0;
}


/*
* Function: void modifyArrayValue(int arr[], int n)
* Description: This function will prompt user to enter n time of numbers
* and add those values in array
* return void
* Parameters: int arr[]; for all values and int n for maximum iteration
* Returns: void
*/
void modifyArrayValue(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}
}


/*
* Function: minArrayValue(int arr[], int n)
* Description: This function will check all the array values and detemiter the lowest value index
* return minIndex
* Parameters: int arr[]; int n
* Returns: minIndex
*/
int minArrayValue(int arr[], int n) {
	int minValue = arr[0];
	int minIndex = 0;
	for (int i = 1; i < n; i++) {
		if (arr[i] < minValue) {
			minValue = arr[i];
			minIndex = i;
		}
	}
	return minIndex;
}