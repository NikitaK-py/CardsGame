#ifndef CARD_H
#define CARD_H

#include "Consts.h"

#include <QObject>

/*!
 * \brief Класс сущности карты.
 */
class Card : public QObject
{
    Q_OBJECT
public:
    /*!
     * \brief Конструктор.
     * \param _suit - Масть.
     * \param _rank - Номинал карты.
     * \param parent - Родительный объект.
     */
    explicit Card(Suits _suit,
                  Rank _rank ,
                  QObject *parent = nullptr);
    //! Возвращает масть.
    Suits suit() const;
    //! Возвращает номинал.
    Rank rank() const;

private:
    //! Масть карты.
    Suits m_suit;
    //! Номанал карты.
    Rank m_rank;
};

#endif // CARD_H
