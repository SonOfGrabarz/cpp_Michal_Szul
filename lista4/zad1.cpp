#include <iostream>
#include <cstdlib>          // zeby kompilator rozpoznal typ size_t

class Wektor
{
private:
    size_t _rozmiar;
    int * _ptab;
public:
    Wektor(size_t n)            // definicja metody
        : _rozmiar(n), _ptab(new int[n])
    {
        for(size_t i = 0; i < _rozmiar; i++)
        {
            _ptab[i] = 0;

        }

    }


    ~Wektor()                   { delete [] _ptab;}

    size_t size() const         {return _rozmiar;}
    int & operator [](int n)    {return _ptab[n];}
    int operator[](int n)const  {return _ptab[n];}

    void operator = (Wektor const& wek);    // delaracja metody
};

int main()
{
    const int size = 10;
    Wektor w(size);

    for( int i = 0; i < size; i++)
    {
        std::cout << "Wartosc w[" << i << "]: " << w[i] << "\n";

        if (w[size] == 0)
        {
            std::cout << "Wektor jest wypelniony zerami!" << "\n";

        }

    }

    return 0;
}
