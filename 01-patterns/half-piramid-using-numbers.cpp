#include <iostream>

int main()
{
    int row;
    std::cout << "enter number of rows\n>";
    std::cin >> row;
    std::cout << std::endl;

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            std::cout << i + 1;
        }
        std::cout << std::endl;
    }
}
