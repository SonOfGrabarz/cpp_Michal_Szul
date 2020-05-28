#if !defined STOS_LISTA_H__
#define STOS_LISTA_H__
// stos liczb typu int oparty na liœcie pojedynczo ³¹czonej, (c) Z. Koza, 2008

#include <cassert>       // <-- definicja assert
#include <cstddef>       // <-- definicja size_t
#include <iostream>

struct Ogniwo
{
    Ogniwo (int n, Ogniwo* p)
    : _dane(n), _p_nastepny(p)
    { }

    int       _dane;
    Ogniwo*   _p_nastepny;   // <-- rekurencyjna struktura danych!
};


class Stos
{
    friend std::ostream& operator << (std::ostream &F, Stos const &c);

public:
    Stos ();                 // konstruktor domyœlny
    Stos (Stos const&);      // konstruktor kopiuj¹cy
    ~Stos();                 // destruktor
    
    void push (int i);       // dok³ada liczbê na szczyt stosu
    void pop();              // zdejmuje liczbê ze szczytu stosu
    int  top() const;        // udostêpnia wartoœæ liczby na szczycie stosu
    int& top();              // udostêpnia referencjê do liczby na szczycie stosu
    bool empty() const;      // czy stos jest pusty?
    size_t size() const;     // bie¿¹cy rozmiar stosu
    Stos& operator=(Stos const&); // operator przypisania
private:
    Ogniwo* _pSzczyt;        // wskaŸnik na ogniwo le¿¹ce na szczycie stosu
    size_t  _size;           // rozmiar stosu
};

inline Stos::Stos()
   : _pSzczyt(0), _size(0)
{ }

inline void Stos::push (int n)
{
    _pSzczyt = new Ogniwo(n, _pSzczyt);
    _size++;
}
  
inline void Stos::pop()
{
    assert ( !empty() );
    Ogniwo* temp = _pSzczyt;
    _pSzczyt = _pSzczyt->_p_nastepny;
    delete temp;
    _size--;
}

inline int Stos::top() const
{
    assert ( !empty() );
    return _pSzczyt->_dane;
}

inline int& Stos::top()
{
    assert ( !empty() );
    return _pSzczyt->_dane;
}

inline bool Stos::empty() const { return  _pSzczyt == 0; }

inline size_t Stos::size() const { return _size; }

#endif
