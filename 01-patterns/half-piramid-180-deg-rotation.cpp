#include <iostream>

int main()
{
    int row = 0;
    std::cout << "enter row number \n>";
    std::cin >> row;
    for (int i = 0; i != row; i++)
    {
        for (int j = (row - i - 1); j > 0; j--)
        {
            std::cout << " ";
        }
        for (int k = i; k >= 0; k--)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    std::cout << "testting";
    return 0;
}