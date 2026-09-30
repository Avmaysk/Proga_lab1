
//Задание 2. Считать цену одной единицы товара и количество. Вывести общую стоимость.
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    double price, count, total;

    cout << "Введите цену за единицу товара: ";
    cin >> price;

    cout << "Введите количество: ";
    cin >> count;

    total = price * count;

    cout << "Общая стоимость: " << total << endl;

    return 0;
}