#include <iostream>
#include <vector>
#include <climits>

int min(const std::vector<int> &wektor)
{
    if(wektor.empty())
    {
        std::cout << " Wartość minimalna: " << std::endl;
        return INT_MIN;
    }

    int minimum = wektor[0];

    for(unsigned i = 1; i < wektor.size(); i++)
    {
        if(minimum > wektor[i])
        {
            minimum = wektor[i];
        }
    }

    return minimum;
}

int main()
{
    std::vector<int> wektor = { 14, 15, -7, 44, 92, 100, 1, 2, 14, 21, 11};
    std::cout << "Wartosc najmniejsza wektora: " << min(wektor) << std::endl;

}
