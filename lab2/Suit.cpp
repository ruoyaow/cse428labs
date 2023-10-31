/**
 * File: Suit.cpp
 * Author: Ruoyao Wen ruoyao@wustl.edu, Wanzhou Liu l.wanzhou@wustl.edu, Zherui Zhou zherui@wustl.edu
 * Purpose: Implentation of enum class: Suit
 */
#include "Suit.h"


/**
 * @brief shift operator implentation, Output the suit feature to std::ostream
 * @param os the stream you want to output to
 * @param const Suit& the object you want to output
 * @return the reference of the inupt ostream
 */
std::ostream &operator<<(std::ostream &os, const Suit &target)
{
    switch (target)
    {
    // C for clubs
    case Suit::clubs:
        os << "C";
        break;

    //D for diamonds
    case Suit::diamonds:
        os << "D";
        break;

    //H for hearts
    case Suit::hearts:
        os << "H";
        break;

    // S for spades
    case Suit::spades:
        os << "S";
        break;

    // for the suits that undefined yet
    case Suit::undefined:
        os << "?";
        break;
    }
    return os;
}

/**
 * @brief Implenment operators ++ for Suit, iterate the Suit to the next
 * @param mySuit the object you want to increase
 * @return the reference after increase
 */
Suit &operator++(Suit &mySuit)
{
    switch (mySuit)
    {
    case Suit::clubs:
        mySuit = Suit::diamonds;
        break;

    case Suit::diamonds:
        mySuit = Suit::hearts;
        break;

    case Suit::hearts:
        mySuit = Suit::spades;
        break;

    case Suit::spades:
        mySuit = Suit::undefined;
        break;

    case Suit::undefined:
        break;
    }
    return mySuit;
}