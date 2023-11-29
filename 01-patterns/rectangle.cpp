#include <iostream>

int main()
{
    int rows = 0, column = 0;
    std::cout << "enter number of rows\n";
    std::cin >> rows;
    std::cout << "\nenter number of columns\n";
    std::cin >> column;
    std::cout << std::endl;
    std::cout<< column<< std::endl <<rows <<std::endl;
    for (int i = 0; i < column; ++i)
    {
        for (int j = 0; j < rows; ++j)
        {
                std::cout << "*";
        }
        std::cout << std::endl;
    }
}