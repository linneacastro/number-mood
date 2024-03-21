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

#include<stdio.h>

void main()
{
int number; // Number to analyze, entered by user
char temp[120]; // Array allocated to store user's input
int sum; // For sum of factors
int factor; // Factor variable

sum = 0; // Initialize sum variable to 0
factor = 1; // Initialize factor to 1, 1 will be a factor of every number

printf("Enter a number: "); // Asking user to enter a number
fgets(temp, 120, stdin); // Get keyboard input from user
sscanf(temp, "%d", &number); // Use sscanf to store the integer from temp[120] in the variable "number"

printf("Analyzing the number %d\n", number); // Print statement to confirm user's input rcvd

// Calculating factors and sum of factors for use later
printf("Factors of %d: ", number);

while (factor < number){ // As long as factor < number, this will keep looping
  if (number % factor == 0){ // If there is no remainder, factor is a factor
    printf("%d ", factor); // Print factor on line started above
    sum = sum + factor; // Add the factor to sum
    factor++; // Increment factor
  }
  else{
    factor++; // Even if it isn't a factor, we still want to increment and keep trying until factor=n-1
  }
}

// Is number prime or composite?
printf("\n%d is ", number);

if (sum == 1){ // If sum == 1 then 1 was the only factor found, number is prime
  printf("prime\n");
}
else{
  printf("composite\n"); // If the number isn't prime, it's composite
}

// Print statement for sum of factors calculated earlier
printf("The sum of all factors of %d is: %d\n", number, sum);

// Mood of number (happy/sad/perfect)
printf("%d is ", number);

if (sum > number){ // If sum > number, number is happy
  printf("happy\n");
  }

else if (sum == number){ // If sum == number, number is perfect
  printf("perfect\n");
  }

else{
  printf("sad\n"); // If not happy or perfect (sum < number), number is sad
}

}

