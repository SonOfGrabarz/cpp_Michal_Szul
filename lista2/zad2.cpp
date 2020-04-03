#include <iostream>
#include <vector>

void zero(std::vector<double> &wektor)
{

    std::cout << "{ ";

    for(unsigned i = 0; i < wektor.size(); i++)
    {
        wektor[i] = 0.0;
        std::cout << wektor[i] << " ";
    }

    std::cout << "}" << std::endl;
}

int main()
{
    std::vector<double> wektor = { 21.11, 11.21, 44.91, 101.1};
    std::cout << "Wyzerowany wektor: ";
    zero(wektor);
    std::cout << std::endl;
}
