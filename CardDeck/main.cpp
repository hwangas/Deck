/*@Deck class; able to shuffle.
 *@author Anna Hwang
 *@github hwangas
 */

#include <iostream>
#include "Deck.h"

int main()
{
	Deck d;
	d.print();
	d.shuffle();
	d.print();
	
	std::cin.get();

	return 0;
}