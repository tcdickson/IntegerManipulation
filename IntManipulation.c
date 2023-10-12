// program that asks the user to enter two integers, obtains the numbers from the user, then prints the larger number followed by the words “is larger.” If the numbers are equal, print the message “These numbers are equal.” Use only the single-selection form of the if statement you learned in this chapter.

//importing standaed C library
#include <stdio.h>
int main () {
// Defining of varianles we will have the user input    
    int num1;
    int num2;
// Description of program and prompting user input
    printf("This program prints the larger of two numbers inputed. \nEnter two numbers:\n");
// User inputs 2 numbers 
    scanf("%d%d", &num1, &num2);
// if statement accounting for if num1 is larger than num2, else if num2 is larger than num1, and finally if num1 is equal to num2 - prompting the console to print out the responses required.     
    if(num1 > num2){
        printf("%d is larger than %d\n", num1, num2);
    } else if(num2 > num1) {
        printf("%d is larger than %d\n", num2, num1);
    } else if( num1 = num2){ 
        puts("These numbers are equal\n");
    }
    return 0;    
}
