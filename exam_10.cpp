/* билет 10
Написать программу, запрашивающую строки у пользователя и выводящую их в типизированный файл. По завершению формирования файшла, программа должна запросить у пользователя номер интересущей его строки и вывести ее на экран.
*/
#include <iostream>
#include <fstream>

int main() {
    std::ofstream fout;
    fout.open("1.txt");

    int num_of_lines = 0;
    std::cout << "Введите количество строк: ";
    std::cin >> num_of_lines;

    for (int i = 0; i < num_of_lines; i++) {
        std::string tmp;
        std::cin >> tmp;
        fout << tmp << std::endl;
    }
    fout.close();

    std::ifstream fin;
    fin.open("1.txt");

    int line_num = 0;
    std::cout << "Введите номер строки: ";
    std::cin >> line_num;

    char buff[128];
    for (int i = 0; i < line_num; i++) {
        fin.getline(buff, 128);
    }
    std::cout << buff;
    fin.close();
    return 0;
}
