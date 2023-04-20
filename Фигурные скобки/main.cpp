#include <fstream>
#include <iostream>
using namespace std;

int main(){
    char file_name[100]; // буфер хранения пути к файлу
    cout << "Введите имя файла: ";
    cin >> file_name;
    ifstream fin(file_name); // открываем файл для чтения
        if (!fin.is_open()) // если файл не открыт
            cout << "Файл не может быть открыт!\n"; 
        else
        {
            int counterBracketOpen = 0, //открывающиеся скобки
                counterBracketClose = 0; //закрывающиеся скобки
            char symbol; // временная переменная для хранения символов считанных из файла
            fin >> symbol; 
            while (fin)
            {
             if (symbol == '{') counterBracketOpen++; 
             if (symbol == '}')
             {
                 counterBracketClose++; 
                 if (counterBracketClose > counterBracketOpen)  
                 break; 
             }
            fin >> symbol; // считываем символ из файла
            } 

            fin.close(); 
            ofstream fout("./out"); // создаём файл для записи результата проверки

            if (counterBracketOpen == 0 && counterBracketClose == 0)
            {
                cout << "В файле нет фигурных скобок!" << endl;
                fout << "В файле нет фигурных скобок!" << endl;
            }
            else
                if (counterBracketOpen == counterBracketClose)
                {
                    cout << "Баланс скобок не нарушен!" << endl;
                    fout << "Баланс скобок не нарушен!" << endl;
                }
                else
                {
                    cout << "Баланс Скобок нарушен!" << endl;
                    fout << "Баланс Скобок нарушен!" << endl;
                }

            fout.close(); // закрываем файл результата

        }
    return 0;
}