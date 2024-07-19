#ifndef CONSTS_H
#define CONSTS_H

// Перечислитель мастей карты.
enum Suits{
    Diamonds,   //!< Бубны.
    Hearts,     //!< Черви.
    Spades,     //!< Пики.
    Clubs,      //!< Трефы(Крести).

    CountSuits  //!< Количество мастей.
};

// Перечислитель номинала карты.
enum Rank{
    Two,    //!< Двойка.
    Three,  //!< Тройка.
    Four,   //!< Четверка.
    Five,   //!< Пятерка.
    Six,    //!< Шестерка.
    Seven,  //!< Семерка.
    Eight,  //!< Восьмерка.
    Nine,   //!< Деветка.
    Ten,    //!< Десятка.
    Jack,   //!< Валет.
    Queen,  //!< Дама.
    King,   //!< Король.
    Ace,    //!< Туз.

    CountRank //!< Количество номиналов.
};

#endif // CONSTS_H
