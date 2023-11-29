#include <iostream>

int main()
{
    int rows = 0, column = 0;
    std::cout << "enter number of rows\n";
    std::cin >> rows;

    std::cout << std::endl;

    for (int i = rows; i > 0; --i)
    {
        for (int j = i; j > 0; --j)
        {
            
                std::cout << "*";
            
            
        }
        std::cout << std::endl;
    }
}