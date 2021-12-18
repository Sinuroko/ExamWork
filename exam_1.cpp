/* билет 1
 * Составить алгоритм и программу для решения задачи:
 * Даны действительные числа s, t, вычислить f(t,-s, 1.17) + f(22, t, s-t) где
 * f(a,b,c) = (2a - b - sin(c)) / (5 + |c|)
 */

#include <cmath>
#include <iostream>

double f(double a, double b, double c) {
    return (2 * a - b - sin(c)) / (5 + std::abs(c));
}

int main() {
    double s, t;
    std::cin >> s >> t;
    double result = f(t,-s, 1.17) + f(22, t, s - t);
    std::cout << result;
    return 0;
}