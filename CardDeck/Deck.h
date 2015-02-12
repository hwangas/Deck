
#ifndef DECK_____
#define DECK_____

#include "Enum_Iterator.h"
#include "Card.h"
#include <time.h>

const int DECK_SIZE = 52;

class Deck
{
public:
	Deck()
	{
		int count = 0;
		for (auto rank : Enum< Card::Rank >()) {
			for (auto suit : Enum < Card::Suit >())	{
				deck[count] = Card(suit, rank);
				++count;
			}
		}
	}

	void shuffle()
	{
		srand(time(NULL));
		for (int i = DECK_SIZE - 1; i >= 0; --i) {
			std::swap(deck[i], deck[rand() % (i + 1)]);
		}
	}

	void print()
	{
		for (Card c : deck) {
			std::cout << "[";
			c.printRank();
			std::cout << ", ";
			c.printSuit();
			std::cout << "]" << std::endl;
		}
		std::cout << "\n";
	}

private:
	Card deck[DECK_SIZE];
};

#endif