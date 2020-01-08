/***********************************************************/
/*  Using only single-character output statements that     */ 
/*  output a hash mark, a space, or an end-of-line, write a*/ 
/*	program that produces the following shape:             */
/*	########                                               */
/*	 ######                                                */
/*	  ####                                                 */
/*	   ##                                                  */
/*                                                         */
/*                                                         */
/***********************************************************/

#include <iostream>
using namespace std;

int main() {
	
	for(int row=1; row<=4; row++) {
		for(int space=1; space <= row - 1; space++){
			cout << " ";
		}
		
		for(int hash=1; hash<=8 - 2 * (row - 1); hash++){
			cout << "#";
		}
		
		cout << "\n";
	}
	
	
	return 0;
}
