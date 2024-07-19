#include "Deck.h"

#include <algorithm>
#include <random>

Deck::Deck(QObject *parent) :
    QObject(parent)
{
    init();
    shuffleCards();
}

void Deck::shuffleCards()
{
    int numShuffle = 5;
    while(numShuffle != 0){
        std::shuffle(m_cards.begin(), m_cards.end(),
                     std::mt19937(std::random_device()()));
        --numShuffle;
    }
    std::reverse(m_cards.begin(), m_cards.end());
}

const Card *Deck::card() const
{
    const Card* card = m_cards.first();
    return card;
}

void Deck::init()
{
    for(int numSuit = 0; numSuit < CountSuits; numSuit++){
        for(int numRank = 0; numRank < CountRank; numRank++){
            Suits suit = static_cast<Suits>(numSuit);
            Rank rank = static_cast<Rank>(numRank);
            Card* card = new Card(suit, rank, this);
            m_cards.append(card);
        }
    }
}
