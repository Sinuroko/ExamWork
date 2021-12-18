/* билет 11
 *  Составить алгоритм для решения задачи:
 *  Дана последовательность целых числе, за которой следует 0. 
 *  Найти: номер минимального элемента
 */

#include <iostream>
using namespace std;

int main()
{
    int len;
    cout << "Amount of number, with zero included: ";
    cin >> len;
    int *mas = new int(len);
    for (int i = 0; i < len; i++)
        cin >> mas[i];

    int max = mas[0];
    int min = mas[0];
    for (int i = 0; i < len - 1; i++)
    {
        if (max < mas[i])
            max = mas[i];

        if (min > mas[i])
            min = mas[i];
    }
    cout << "max value: " << max << endl;
    cout << "min value: " << min << endl;

}