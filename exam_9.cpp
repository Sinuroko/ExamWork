/* билет 9
 *  Составить алгоритм для решения задачи:
 *  вычислить сумму всех цифр, введенного с клавиатуры числа
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long a = 0;
    long num;
    int answer;
    cin >> a;
    num = floor(log10(a)) + 1;
    if (num < 3) {
        answer = a / (int)pow(10, num - 1) + (a % 10);
    }
    else if (num < 4) {
        answer = a / (int)pow(10, num - 1) + (a % 10) + (a % 100 / 10);
    }
    cout << answer;
    return 0;
}