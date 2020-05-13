#include <iostream>
#include <vector>

int main()
{
    // wskaznik na tab stu liczb typu double
    double tab[100];
    double *t = tab;

    // dwuwymiarowa tablica 5x5 wskaznikow na char
    char *tab1[5][5];

    // tablice (o nieokreslonej dlugosci) wskaznikow na char
    char *tab2[] = {0};

    // standadowy wektor wskaznikow void*
    std::vector<void*> v;

    // czteroelementowa tablice wektorow o elementach typu double
    std::vector<double> vx[4];

    // wskaznik na funkcje zwracajaca jako wartosc liczbe typu double
    // i przyjmujaca dwa argumenty: tablice (w stylu C) liczb typu
    // double oraz liczbe typu int
    double *function1(double tab[], int x);

    // dowolna funkcje przyjmujaca przez referencje wskaznik na int
    int (*function2)(double&);

    return 0;
}
