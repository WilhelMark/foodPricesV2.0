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

        // Заполняем вектор цен
    for (int i = 0; i < numPrices; ++i) {
        float price;
        std::cout << "Введите цену для товара " << i + 1 << ": ";
        std::cin >> price;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очищаем буфер ввода
        prices.push_back(price);
    }

    // Вектор индексов купленных товаров
    std::vector<int> items;
    int numItems;
    
    // Запрашиваем количество покупок
    std::cout << "Введите количество покупок: ";
    std::cin >> numItems;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очищаем буфер ввода

    // Заполняем вектор покупок
    std::cout << "Введите индексы товаров через пробел: ";
    std::string line;
    std::getline(std::cin, line);  // Читаем строку с индексами
    std::stringstream ss(line);     // Создаем строковый поток
    int itemIndex;
    while (ss >> itemIndex) {       // Читаем индексы из потока
        items.push_back(itemIndex);
    }

    // Переменная для хранения итоговой стоимости покупок.
    float totalCost = 0.0;