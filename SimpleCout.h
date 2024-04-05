//brief:
#include <iostream>

#define RESET "\033[0m" 
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE_RED "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"

enum fontColor{
 reset , 
 red ,
 green ,
 yellow ,
 blue ,
 purple_red ,
 cyan ,
 white 
};

template<typename T>
void Cout(T data,fontColor t = white,bool isNewRow = true)
{
    switch(t)
    {
    case reset:      std::cout << RESET ; break;
    case red:        std::cout << RED ; break;
    case green:      std::cout << GREEN ; break;
    case yellow:     std::cout << YELLOW ; break;
    case blue:       std::cout << BLUE ; break;
    case purple_red: std::cout << PURPLE_RED ; break;
    case cyan:       std::cout << CYAN ; break;
    case white:      std::cout << WHITE ; break;
    }
    std::cout << data;
    std::cout << RESET;
    if (isNewRow) std::cout << std::endl;
}