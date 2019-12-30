/***********************************************************/
/*  Write a program that uses only two output statements,  */
/*  cout < < "#" and cout < < "\ n", to produce a pattern  */
/*  of hash symbols shaped like a sideways triangle:       */
/*                                                         */
/*  #                                                      */
/*  ##                                                     */
/*  ###                                                    */
/*  ####                                                   */
/*  ###                                                    */
/*  ##                                                     */
/*  #                                                      */
/***********************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {

	for (int row = 1; row <= 7; row++) {
		for (int hash = 1; hash <= 4 - abs(4-row); hash++) {
			cout << "#";
		}
		cout << "\n";
	}

	return 0;
}
