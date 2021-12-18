/* билет 2
 * Составить алгоритм и программу для решения задачи:
 * Даны действительные числа s, t, вычислить f(1.12, S) + f(t, s) - f(2s - 1, st) где
 * f(a,b) = (a^2 + b^2) / (a^2 + 2ab + 3b^2 + 4^2)      <---- перепроверьте, на фотке плохо видно
 */

#include <cmath>
#include <iostream>

double f(double a, double b) {
    return (pow(a, 2) + pow(b, 2)) / (pow(a, 2) + 2*a*b + 3*pow(b, 2) + pow(4, 2));
}

int main() {
    double s, t;
    std::cin >> s >> t;
    double result = f(1.12, s) + f(t, s) - f(2*s - 1, s * t);
    std::cout << result;
    return 0;
}