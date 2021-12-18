/* билет 14
 *  Составить алгоритм и программу для решения задачи:
 *  Написать программу, выводящую на экран все простые числа из дипазона,
 *  введенного пользователем из клавиатуры
 */

#include <iostream>

using namespace std;
void ListProstNumber(int xs, int xe);

int main()
{
    int xfirst = 0;
    int xsecond = 0;
    cout << "Insert start number of sequence : ";
    cin >> xfirst;
    cout << "Insert end number of sequence : ";
    cin >> xsecond;
    ListProstNumber(xfirst, xsecond);
    return 0;
}


void ListProstNumber(int xs, int xe)
{
    int i;
    int x1 = 2;
    do
    {
        for (i = 2; i <= x1; i++)
            if (!(x1 % i))
                break;
        if (i == x1 && x1 >= xs && x1 <= xe)
            cout << x1 << endl;
        x1++;
    } while (x1 <= xe);
}