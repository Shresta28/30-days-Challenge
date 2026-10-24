# Challenge 6 — Array Reading Analysis Using C

## Overview of the Project

In this project, a C program is utilized to take as input some integer readings and perform various operations over the array. The project explores the application of arrays, iterations, decision-making processes, and primitive algorithms.

## The Problem Statement

You have to write a program in C to perform the desired operations on an array of `N` integer readings where the size of the array lies between 5 and 12 and the elements of the array are within the bounds of 0 and 1000.

1. Show all the values present in the readings.
2. Perform calculations to find the total sum, average, maximum and minimum.
3. Identify the second largest unique number.
4. Find out how many peak elements do exist in the created array.
5. Determine the length of the longest strictly increasing contiguous run.
6. Perform a left rotation of the array by `K` places.
7. Enter `R`, and calculate `D = ((R % 9) + 9) % 9 + 1`, to count the numbers of elements that are divisible by `D`.

A peak is a number that is greater than the two numbers that are adjacent to it. The first and last elements do not count as peaks.

## Algorithm

1. Start the program.
2. Read `N` and validate that it is between 5 and 12.
3. Read the array elements and validate that each is between 0 and 1000.
4. Initialize the minimum and maximum using the first array element.
5. Traverse the array to calculate the sum, minimum, maximum, peak count, and longest increasing run.
6. Calculate the average by dividing the sum by `N`.
7. Find the second-largest distinct value by checking elements smaller than the maximum.
8. Read `K` and normalize it to a value between 0 and `N - 1`.
9. Rotate the array left using three reversals:
   - Reverse the entire array.
   - Reverse the first `K` elements.
   - Reverse the remaining elements.
10. Read `R` and calculate `D`.
11. Count the elements divisible by `D`.
12. Display the results and stop.

