#include <iostream>


struct Car
{
    enum mark {BMW, Lada, Toyota, UAZ, GAZ};
    enum color {White, Black, Red, Blue};
    int count;
    int price;
    int able;
    int sale;
};
int main()
{
    int arr[10];

    // Заполняем массив с клавиатуры
    for (int i = 0; i < 10; i++) {
        std::cout << "[" << i + 1 << "]" << ": ";
    return 0;
}
