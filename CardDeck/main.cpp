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