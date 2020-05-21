#include <iostream>

class Samochod
{
public:
    Samochod(int n)
        : _kola(n), _sruby(4*n)
        // lub metoda 2
    {
        // _sruby = 4 * _kola
        std::cout << "Samochod z " << _kola << " kolami i " << _sruby << " srubami.\n";
    }

private:
    int _kola;
    int _sruby;

};

int main()
{
    Samochod s4(4);
    Samochod s12(12);

}
