#include <iostream>
#include <vector>
#include <sstream> // Для std::stringstream
#include <limits> // Для std::numeric_limits

int main() {
    // Вектор цен на продукты
    std::vector<float> prices;
    int numPrices;

    // Запрашиваем количество цен
    std::cout << "Введите количество цен: ";
    std::cin >> numPrices;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очищаем буфер ввода