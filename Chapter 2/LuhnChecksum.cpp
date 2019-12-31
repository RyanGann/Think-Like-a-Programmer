/*************************************************************/
/* The Luhn formula is a widely used system for validating   */
/* identification numbers. Using the original number, double */
/* the value of every other digit. Then add the values of    */
/* the individual digits together (if a doubled value now    */
/* has two digits, add the digits individually). The         */
/* identification number is valid if the sum is divisible    */ 
/* by 10.                                                    */
/*                                                           */
/* Write a program that takes an identification              */
/* number of arbitrary length and determines whether the     */ 
/* number is valid under the Luhn formula. The program must  */ 
/* process each character before reading the next one.       */  
/*************************************************************/

#include <iostream>
using namespace std;


int doubleDigitValue(int digit);

int main() {
	char digit;
	int oddLengthChecksum = 0;
	int evenLengthChecksum = 0;
	int position = 1;
	
	cout << "Enter a number: ";
	digit = cin.get();              //Get the first individual character that the user has entered
	while(digit != 10) {			//Make sure the user did not press 'Enter'
		if (position % 2 == 0) {    
			oddLengthChecksum += doubleDigitValue(digit - '0');   //Subtracts '0'(48) from digit to convert the char digit to its integer equivalent
			evenLengthChecksum += digit - '0';
		} else {												
			oddLengthChecksum += digit - '0';
			evenLengthChecksum += doubleDigitValue(digit - '0');
		}
		digit = cin.get();
		position++;
	}
	int checksum;
	if ((position - 1) % 2 == 0) 
	  checksum = evenLengthChecksum;
	else 
	  checksum = oddLengthChecksum;
	cout << "Checksum is " << checksum << endl;
	
	if (checksum % 10 == 0) 
	  cout << "Checksum is divisible by 10. Valid." << endl;
    else
      cout << "Checksum is not divisible by 10. Invalid. " << endl;
  
	
	return 0;
}

int doubleDigitValue(int digit) {
	int doubledDigit = digit * 2;
	int sum;
	
	if (doubledDigit>=10)
	  sum = 1 + doubledDigit % 10;
	else
	  sum = doubledDigit;
	  
	return sum;
}


