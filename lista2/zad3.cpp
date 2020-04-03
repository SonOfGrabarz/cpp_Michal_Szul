#include <iostream>
#include <vector>

double operator* (std::vector<double> const &v, std::vector<double> const &w)
{
    double wynik = 0.0;

    for(unsigned i = 0; i < v.size() and i < w.size(); i++)
    {
        wynik += v[i] * w[i];
    }

    return wynik;
}

std::ostream &operator << (std::ostream &F, std::vector<double> const &w)
{
    F << "(";
    if(!w.empty())
    {
        F << w[0];

    }

    for(unsigned i = 0; i < w.size(); i++)
    {
        F << "," << w[i];

    }

    F << ")";
    return F;
}

int main()
{
    std::vector<double> v = {21.11, 11.21, 20.20, 4.4, 1.8};
    std::vector<double> w = {1.15, 4.5, 7.9, 6.9, 44.12};
    std::cout << "v = " << v << std::endl;
    std::cout << "w = " << w << std::endl;
    std::cout << "v * w = " << v * w << std::endl;
}
