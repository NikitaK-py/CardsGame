#include "Card.h"

Card::Card(Suits _suit, Rank _rank, QObject *parent) :
    QObject(parent),
    m_suit(_suit),
    m_rank(_rank)
{

}

Suits Card::suit() const
{
    return m_suit;
}

Rank Card::rank() const
{
    return m_rank;
}
