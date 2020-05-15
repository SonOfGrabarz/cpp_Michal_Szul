#include <iostream>


class Zespolona
{
public:
    double real;
    double imag;

    Zespolona()
    {
        real = imag = 0;

    }

    Zespolona(double r)
    {
        real = r;
        imag = 0;

    }

    Zespolona(double r, double i)
    {
        real = r;
        imag = i;

    }

    Zespolona dodaj(Zespolona c)
    {
        Zespolona dodaj;
        dodaj.real = real + c.real;
        dodaj.imag = imag + c.imag;
        return dodaj;
    }

    Zespolona odejmij(Zespolona c)
    {
        Zespolona odejmij;
        odejmij.real = real - c.real;
        odejmij.imag = imag - c.imag;
        return odejmij;

    }

    Zespolona pomnoz(Zespolona c)
    {
        Zespolona pomnoz;
        pomnoz.real = real * c.real - imag * c.imag;
        pomnoz.imag = real * c.imag - c.real * imag;
        return pomnoz;

    }

    Zespolona podziel(Zespolona c)
    {
        Zespolona podziel;
        podziel.real = (real * c.real + imag * c.imag)/(c.real * c.real + c.imag * c.imag);
        podziel.imag = (imag * c.real + real * c.imag)/(c.real * c.real + c.imag * c.imag);
        return podziel;

    }

    void print()
    {
        std::cout << real << " + " << imag << "i" << "\n";

    }

    double getReal()
    const{
        return real;
    }

    double getImag()
    const{
        return imag;
    }

    void setReal(double re)
    {
        real = re;

    }

    void setImag(double im)
    {
        imag = im;
    }

};

std::ostream& operator << (std::ostream &F, Zespolona const &c)
{
    F << c.real << " + " << c.imag << "i";
    return F;
}

std::istream& operator >> (std::istream &F, Zespolona &c)
{
    std::cout << "Wprowadz czesc rzeczywista: ";
    F >> c.real;
    std::cout << "Wprowadz czesc urojona: ";
    F >> c.imag;
    return F;

}

int main()
{
    Zespolona z1;
    std::cout << "Pierwsza liczba zespolona (a + ib): " << "\n";
    std::cin >> z1;
    std::cout << z1 << "\n";

    Zespolona z2;
    std::cout << "Druga liczba zespolona (a + ib): " << "\n";
    std::cin >> z2;
    std::cout << z2 << "\n";

    std::cout << "suma: " << z1.dodaj(z2) << "\n";
    std::cout << "roznica: " << z1.odejmij(z2) << "\n";
    std::cout << "iloczyn: " << z1.pomnoz(z2) << "\n";
    std::cout << "iloraz: " << z1.podziel(z2) << "\n";
}
