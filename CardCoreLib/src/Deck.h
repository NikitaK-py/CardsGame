#ifndef DECK_H
#define DECK_H

#include "Card.h"

#include <QObject>
#include <QList>
/*!
 * \brief Класс колоды с картами.
 */
class Deck : public QObject
{
    Q_OBJECT
public:
    //! Конструткор.
    explicit Deck(QObject *parent = nullptr);

    //! Метод перемешивания колоды.
    void shuffleCards();
    //! Возвращает верхнюю карту.
    const Card* card() const;

private:
    //! Инициализирует колоду карт
    void init();

private:
    //! Список карт.
    QList<Card*> m_cards;
};

#endif // DECK_H
