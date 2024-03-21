// PA1 Properties Related to Factors of a Number
// NAME: Linnea P. Castro
// DATE: 27 OCT 2022
// COURSE: CSE 215
// ASSIGNMENT: PA1

/* SYNOPSIS: This program will take a number input from the user and calculate its factors, beginning
at 1.  The program uses the calculation number%factor to determine whether it is a factor.  If
number%factor == 0 (has no remainder), it will be a factor, sum will be calculated, and the factor
incremented by 1.  The number 1 will pass this part of the loop every time, ensuring that 1 is always 
a factor and that the sum of factors is always at least 1. If factor is incremented, travels through
the loop and turns out NOT to be a factor, factor will be incremented and the loop starts again.  

An if/else if/else conditional is set up to find the mood of the number. 

Biggest lesson learned: a while loop with nested if/else statement was a better/simpler fit than the 
original for loop conditional I had set up.  The while loop allowed me to better increment factor
variable as long as variable was less than factor, but only calculate sum for legit factors.  
*/
