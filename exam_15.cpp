/* билет 15
 * В одномерном массиве, состоящем из n вещественных элементов,
 * вычислить сумму отрицательных элементов массива, упорядочить
 * элементы по возрастанию.
 */

#include <algorithm>
#include <iostream>

int main()
{
    double array[]={1, -25, 23, -41, 2, -3, 42, 0, 34};
    double sum_negative = 0;
    for (auto it : array) {
        sum_negative += it;
    }
    std::sort(array, array+sizeof(array)/sizeof(double));
    std::cout << "Сумма отрицательных элементов: " << sum_negative << std::endl;
    std::cout << "Отсортированный массив: ";

    for (auto it : array) {
        std::cout << it << ", ";
    }

    std::cout << std::endl;
    return 0;
}