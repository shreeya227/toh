/*Program : Tower of Hanoi
 * Author  : Shreeya Pandey
 * Date    : 24/07/2016
 * Ref	   : Data Structure Using C and C++, Chapter 3, Page 165 */


#include <stdio.h>
void towers (int, char , char, char) ;
 
 int main()
 {
 	int n;
 	printf ("Enter no. of number of disks \n");
 	scanf ("%d", &n);
 	towers (n, 'A', 'C', 'B');
 	}
 
 void towers (int n, char frompeg, char topeg, char auxpeg) {
 	if (n == 1) {
 		printf ("\n %s %c %s %c", "move disk 1 from peg ", frompeg, " to peg ", topeg);
 		return;
 	} 
 	
 	towers (n - 1, frompeg, auxpeg, topeg);
 	
 	printf ("\n %s %d %s %c %s %c", "move disk ", n , " from peg ", frompeg, " to peg ", topeg);
 	
 	towers (n - 1, auxpeg, topeg, frompeg);
 }
