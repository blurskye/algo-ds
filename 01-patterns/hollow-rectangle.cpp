#include <iostream>

int main()
{
    int rows = 0, column = 0;
    std::cout << "enter number of rows\n";
    std::cin >> rows;
    std::cout << "\nenter number of columns\n";
    std::cin >> column;
    std::cout << std::endl;
    std::cout << column << std::endl
              << rows << std::endl;
    for (int i = 0; i < column; ++i)
    {
        for (int j = 0; j < rows; ++j)
        {
            if (i == 0 || i == column - 1 || j == 0 || j == rows - 1)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}