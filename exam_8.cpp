/* билет 8
 * Дана последовательность целых чисел, за которой следует 0. Найти среднее арифметическое
 */

#include <iostream>
using namespace std;
int main()
{
    int amount;
    float count = 0;
    int number = 0;
    cout << "How many numbers (Without zero)";
    cin >> amount;
    cout << "Input numbers ";
    for (int i = 0; i <= amount; i++) {
        cin >> number;
        count += number;
    }
    count = count / amount;
    cout << "Equal: " << count;
}