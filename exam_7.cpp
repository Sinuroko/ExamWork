/* билет 7
 * Составить алгоритм и программу для решения задачи:
 * Вычислить и вывести в текстовый файл с именем "Out.txt" число
 * S = Σ(i=1;256) (Sin(i) + Cos(i))
 */

#include <cmath>
#include <fstream>
#include <iostream>

int main() {
    double result = 0;
    for (double i = 1; i <= 250; i+=1) {
        result += sin(i) + cos(i);
    }

    std::cout << result << std::endl;

    std::ofstream fout;
    fout.open("Out.txt");
    fout << result;
    fout.close();
    return 0;
}