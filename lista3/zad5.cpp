#include <iostream>
#include <string.h>

int main()
{
    char haslo[8];                  // tu bedzie przechowywane haslo
    strcpy(haslo, "Ta.jnE!");       // kopiuje drugi argument w miejsce pierwszego

    for(;;)
    {
        std::cout << "Podaj haslo: ";
        char temp[8];               // zmienna tymczasowa na wczytanie hasla
        std::cin >> temp;

        if(strcmp(temp, haslo) == 0) // czy teksty sa takie same
            break;

        std::cout << "Zle haslo!\n";

    }

    std::cout << "Witaj w systemie!\n";

    // program dziala poprawnie, nie znalazlem bledu
    return 0;
}
