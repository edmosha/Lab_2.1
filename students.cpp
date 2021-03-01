#include "students.h"


void MENU () {
    while (num != 5) {
        cout << "\n<----Меню---->" << endl;
        cout << "1 > Чтение файла" << endl;
        cout << "2 > Вывод данных" << endl;
        cout << "3 > Редактирование" << endl;
        cout << "4 > Процент успевающих студентов" << endl;
        cout << "5 > Сохранение результата в новый файл" << endl;
        cout << "6 > Завершить" << endl;
        cout << "Сделай свой выбор!!!!" << endl;
        cin >> num;
        switch (num) {
            case 1: {
                cout << "Сколько строк следует прочитать?" << endl;
                cin >> N;
                flag = Read(S, N);
                if(flag != 1) exit(1);
            }break;
            case 2: {
                if (flag != 0) {
                    Print(S,N);
                } else {
                    cout << "\nНет прочитанных файлов. Сначала выполните пунт '1'.";
                }
            }break;
            case 3: {
                if (flag != 0) {
                    cout << "\nКакую строку вы хотите отредактировать?" << endl;
                    cin >> lineNum;
                    cout << "\nКакой пункт вы хотите отредактировать?" << endl;
                    cout << "1. Название группы" << endl;
                    cout << "2. Название факультета" << endl;
                    cout << "3. Количество студентов" << endl;
                    cout << "4. Количество успевающих студентов" << endl;
                    cin >> pointNum;
                    cout<< endl;
                    switch (pointNum-1) {
                        case 1: {
                            cin >> S[lineNum].name;
                        }break;
                        case 2: {
                            cin >> S[lineNum].faculty;
                        }break;
                        case 3: {
                            cin >> S[lineNum].studentsNum;
                        }break;
                        case 4: {
                            cin >> S[lineNum].goodStudentsNum;
                        }break;
                        default: {
                            cout << "\nВведено неверное значение" << endl;
                        }
                    }
                } else {
                    cout << "\nНет прочитанных файлов. Сначала выполните пунт '1'.";
                }
            }break;
            case 4: {
                if (flag != 0) {
                    for (int i=0; i<N;i++) {
                        studCount += S[i].studentsNum;
                        gStudCount += S[i].goodStudentsNum;
                    }
                    cout << "Процент успевающих студентов: " << (gStudCount / studCount) * 100;
                } else {
                    cout << "\nНет прочитанных файлов. Сначала выполните пунт '1'.";
                }
            }break;
            case 5: {
                if (flag != 0) {
                    cout << "\nВведите название файла" << endl;
                    cin >> newFile;

                } else {
                    cout << "\nНет прочитанных файлов. Сначала выполните пунт '1'.";
                }
            }break;
            case 6: {
                cout << "Завершение работы..." << endl;
                delete [] S;
                S = NULL;
            }break;
            default: {
                cout << "\nВведено неверное значение";
            }
        };
    }
};

int Read (Students *S, int n) {   // Указатель на массив, n - кол-во элементов массива
    ifstream file;
    file.open("C:\\Users\\MagicWinner\\CLionProjects\\untitled\\students.txt");
    if(file) {
        for (int i = 0; i < n; i++) {
            file >> S[i].name >> S[i].faculty >> S[i].studentsNum >> S[i].goodStudentsNum;
        }
    } else {
        cout << "Файл не прочитан." << endl;
    }
    file.close();
    return 1;
}

void Print (Students *S, int n) {
    for(int i = 0; i < n; i++) {
        cout << i << ". ";
        cout << "Наз. гр.: " << S[i].name << " ";
        cout << "Фак.: " << S[i].faculty << " ";
        cout << "Кол-во студ.: " << S[i].studentsNum << " ";
        cout << "Кол-во усп. студ.: " << S[i].goodStudentsNum << endl;
    }
}
