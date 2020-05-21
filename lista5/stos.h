#if !defined DWEKTOR_H__
#define DWEKTOR_H__
// dynamiczny stos liczb typu int, (c) Z. Koza, 2008

#include <cstddef>           // definicja size_t
#include <cassert>           // definicja assert

class Stos
{
public:
    Stos ();                 // konstruktor domyœlny
    Stos (Stos const&);      // konstruktor kopiuj¹cy
    ~Stos();                 // destruktor
    
    void push (int i);       // dok³ada liczbê na stos
    void pop();              // zdejmuje liczbê ze stosu
    int  top() const;        // udostêpnia wartoœæ liczby na szczycie stosu
    int& top();              // udostêpnia referencjê do liczby na szczycie stosu
    bool empty() const;      // czy stos jest pusty?
    size_t size() const;     // bie¿¹cy rozmiar (logiczny) stosu
    Stos& operator= (Stos const&);      // operator przypisania
private:
    enum { initial_capacity = 1 };      // sta³a wyliczeniowa
    void _grow();            // prywatna (!) funkcja s³u¿¹ca do rozszerzania stosu
    void _shrink();

    size_t _capacity;        // rzeczywisty (= fizyczny) rozmiar tablicy
    size_t _size;            // pozorny (= logiczny) rozmiar tablicy
    int* _tab;               // tablica z danymi
};

inline Stos::Stos()
: _capacity(initial_capacity),
  _size (0),
  _tab( new int[initial_capacity] )
{
    assert (initial_capacity > 0);
}

inline Stos::~Stos () { delete [] _tab; }

inline void Stos::push (int n)
{
    if (_size == _capacity)  // jeœli nie ma wiêcej miejsca na stosie...
        _grow();
     
    _tab[_size] = n;
    _size++;
}
  
inline void Stos::pop()
{
    assert( !empty() );
    _size--;
}

inline int Stos::top() const
{
    assert( !empty() );
    return _tab[_size - 1];
}

inline int& Stos::top()
{
    assert( !empty() );
    return _tab[_size - 1];
}

inline bool Stos::empty() const { return _size == 0; }

inline size_t Stos::size() const { return _size; }

#endif
