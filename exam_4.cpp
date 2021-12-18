/* билет 4
 * Составить алгоритм и программу для решения задачи:
 * Даны действительные числа S, t, вычислить f(1.12, s) + f(t, e) + f(2t - s, 2), где
 * f(a,b) = 5b^3/(b^3, a^3)
 */

#include <cmath>
#include <iostream>

double f(double a, double b) {
    return (5 * pow(b, 3)) / (pow(b, 3) + pow(a, 3));
}

int main() {
    double s, t;
    std::cin >> s >> t;
    double result = f(1.12, s) + f(t, e) + f(2t - s, 2);
    std::cout << result;
    return 0;
}