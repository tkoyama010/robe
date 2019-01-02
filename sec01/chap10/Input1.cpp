#include <iostream>

int main()
{
    int a;

    std::cout << "何か値を入れてね > ";
    std::cin >> a;

    std::cout << "その数を３で割った余りは"
              << a % 3 << "です。" << std::endl;
}
