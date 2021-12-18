/* билет 16
 * Описать структуру с именем STUDENT, содержащую следующие поля:
 * - ФИО
 * - номер группы
 * - успеваемость (массив из 5 элементов)
 * Написать программу, выполняющиую вывод на экран монитора ФИО и номеров гурпп всех студентов,
 * если средний балл больше 4, если таких студентов нет, вывести соответствующее сообщение.
 */
#include <iostream>
#include <vector>
#include <string>

struct STUDENT {
    std::string full_name;
    unsigned group_num;
    int grades[5];
};

double average_grade(STUDENT student) {
    double sum = 0;
    for (auto grade : student.grades) {
        sum += grade;
    }
    return sum / 5;
}

// функция "сессия", выводящая оставшихся после неё студентов
void session(std::vector<STUDENT> students) {
    std::vector<STUDENT> passed;
    for (auto student : students) {
        if (average_grade(student) > 4) {
            passed.push_back(student);
        }
    }
    if (passed.empty()) {
        std::cout << "Нет студентов с хорошими оценками." << std::endl;
    } else {
        for (auto student : passed) {
            std::cout << "ФИО: " << student.full_name <<
                ", номер группы: " << student.group_num << std::endl;
        }
    }
}

int main() {
    std::vector<STUDENT> students{
            STUDENT{"AAA", 1, {4, 4, 4, 4, 5}},
            STUDENT{"AAБ", 1, {4, 4, 4, 4, 4}},
            STUDENT{"AББ", 2, {4, 3, 4, 5, 5}},
            STUDENT{"БББ", 3, {2, 4, 3, 4, 2}}
    };
    session(students);
    return 0;
}
