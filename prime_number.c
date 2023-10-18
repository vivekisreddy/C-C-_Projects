// Name: Vivek Reddy Kasireddy  
// Date: 1/12/2023
// Homework 0 - Part 2
#include <stdio.h>

int main(void) {

  // initiliazing the variables 
  int val; // this variable 'x' stores the user input value 
  int x = 2; // 2 is used the division calculation 
  int counter = 0; // counter value 

  // asking for user input 
  printf("Please enter a value: \n"); // prints user input on new line 
  scanf("%d", &val); // takes the user input 
  int constant = val / x; // declaring a 'constant' variable by dividing the given value (val) by the user by 2 

  //loop to get check is the value is a prime number or not 
  for(int i = 2; i <= constant; i++) { // loops through all the numbers 
    if(val % i == 0){ // checks if the v/x is a whole number  
        counter = 1; // sets the 'counter' value as 1 
        break; // break the loop 
    }
  }

  if (counter == 0) { // checks if the counter still is 0, and remained unchanged then the value is a prime number 
    printf("This value is a prime number"); 
  }
  else { // the number is not a prime number if v/x was never a whole number 
    printf("This value is not a prime number");
  }
  return 0; // checks that the program executed successfully 

} // EXIT MAIN 

/*
Initialize variables
Prompt user for value
Get value from terminal and store in variable
Loop over all numbers  (x) less than the specified value (v)
if the v/x is a whole number (hint, use the % operator which returns 
the remainder of a/b)
then the value is not prime
print "This value is not a prime number" to the terminalExit the loop
If v/x was never a whole number
print "This value is a prime number" to the terminal
*/