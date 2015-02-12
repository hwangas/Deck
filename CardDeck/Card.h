#include <iostream>

#ifndef CARD_____
#define CARD_____


class Card
{
public:
	enum class Suit { SPADE, CLUB,  DIAMOND, HEART, FIRST=SPADE, LAST=HEART, INVALID };
	enum class Rank { TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE, FIRST=TWO, LAST=ACE, INVALID };

	Card() : suit(Suit::INVALID), rank(Rank::INVALID) {};
	Card(Suit s_, Rank r_) : suit(s_), rank(r_) {};

	Suit getSuit() { return suit; }
	Rank getRank() { return rank; }

	void printSuit() 
	{
		std::cout << "Suit: ";
		switch (suit) {
		case Suit::SPADE:
			std::cout << "SPADE";
			break;
		case Suit::CLUB:
			std::cout << "CLUB";
			break;
		case Suit::DIAMOND:
			std::cout << "DIAMOND";
			break;
		case Suit::HEART:
			std::cout << "HEART";
			break;
		default:
			std::cout << "INVALID";
			break;
		}
	}

	void printRank()
	{
		std::cout << "Rank: ";
		switch (rank) {
		case Rank::TWO:
			std::cout << "TWO";
			break;
		case Rank::THREE:
			std::cout << "THREE";
			break;
		case Rank::FOUR:
			std::cout << "FOUR";
			break;
		case Rank::FIVE:
			std::cout << "FIVE";
			break;
		case Rank::SIX:
			std::cout << "SIX";
			break;
		case Rank::SEVEN:
			std::cout << "SEVEN";
			break;
		case Rank::EIGHT:
			std::cout << "EIGHT";
			break;
		case Rank::NINE:
			std::cout << "NINE";
			break;
		case Rank::TEN:
			std::cout << "TEN";
			break;
		case Rank::JACK:
			std::cout << "JACK";
			break;
		case Rank::QUEEN:
			std::cout << "QUEEN";
			break;
		case Rank::KING:
			std::cout << "KING";
			break;
		case Rank::ACE:
			std::cout << "ACE";
			break;
		default:
			std::cout << "INVALID";
			break;
		}
	}
private:
	Suit suit;
	Rank rank;
};

#endif