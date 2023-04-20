#include <iostream> 
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
    setlocale(0, "");
    int c, i = 0;
    cout << "Кол-во углов ";
    cin >> c;
    int(*coor)[2];
    coor = new int[c][2];
    while (i != c)
    {
        cout << "Введите координаты " << endl;
        cout << "По X ";
        cin >> coor[i][0];
        cout << "По Y ";
        cin >> coor[i][1];
        i++;
    };
    double sum = 0;
    i = 0;
    int t = 1;
    while (t != c) 
    {
        sum = sum + (coor[i][0] + coor[t][0])*(coor[t][1] - coor[i][1]);
        t++;
        i++;
    }
    t = c - 1;
    i = 0;
    sum = sum + (coor[i][0] + coor[t][0])*(coor[i][1] - coor[t][1]);
    cout << "Площадь " << fixed << setprecision(3) << abs(sum) / 2 << endl;
    system("pause");
    delete[]coor;
}