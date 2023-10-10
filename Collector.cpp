#include <iostream>
int score;
int debt;

int main()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "Какой у вас долг \n";
    std::cin >> debt;

    while (debt > 0) {
        std::cout << "Плоти свой долг в " << debt << " \n";
        std::cin >> score;
        debt -= score;
    }
    if (score > debt) {
        std::cout << "Остаток" << debt + score;
    }
    else {
        std::cout << "Долг уплачен ";
    }
}