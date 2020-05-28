#include <iostream>
#include <sstream>
#include <string>

void stream(std::istringstream &name)
{
       while(true) {
           double number;
           name >> number;

           if (name) {
               std::cout << number << "\n";
               continue;
           }

           else if (name.eof()) {
               break;
           }

           name.clear();
           name.get();
       }
}



int main()
{
    std::istringstream characters_sequence("6 7 78 99 21");
    stream(characters_sequence);
    std::cout << "\n";


    return 0;
}
