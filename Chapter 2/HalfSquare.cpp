/***********************************************************/
/*  Write a program that uses only two output statements,  */
/*  cout < < "#" and cout < < "\ n", to produce a pattern  */
/*  of hash symbols shaped like half of a perfect 5 x 5    */
/*  square(or a right triangle):                           */ 
/*                                                         */
/*  #####                                                  */
/*  ####                                                   */
/*  ###                                                    */
/*  ##                                                     */
/*  #                                                      */
/*                                                         */
/***********************************************************/

	
#include <iostream>
using namespace std;

int main() {

	for (int row = 1; row <= 5; row++) {
		for (int hash = 0; hash < 6-row; hash++) {
			cout << "#";
		}
		cout << "\n";
	}

	return 0;
}