#include "../Header/students.h"

int flag = 0, num, lineNum, pointNum, percent = 0;
float gStudCount = 0, studCount = 0;

Students *pStud;
int N = 0;

void MENU () {
    while (num != 6) {
        cout << "\n<----Меню---->" << endl;
        cout << "1 > Чтение файла" << endl;
        cout << "2 > Вывод данных" << endl;
        cout << "3 > Редактирование" << endl;
        cout << "4 > Процент успевающих студентов" << endl;
        cout << "5 > Сохранение результата в новый файл" << endl;
        cout << "6 > Завершить" << endl;
        cout << "> > Сделай свой выбор!!!!" << endl;
        cin >> num;

        switch (num) {
            case 1: {
                cout << "Сколько строк следует прочитать?" << endl;
                cin >> N;
                pStud = new Students[N];
                flag = Read(pStud, N);
            }break;
            case 2: {
                if (flag == 1) {
                    Print(pStud,N);
                } else {
                    cout << "\nНет прочитанных файлов.";
                }
            }break;
            case 3: {
                if (flag == 1) {
                    Edit (pStud);
                } else {
                    cout << "\nНет прочитанных файлов.";
                }
            }break;
            case 4: {
                if (flag == 1) {
                    percent = PercentStudents(pStud, N);
                    cout << "Процент успевающих студентов: " << percent << "%";
                } else {
                    cout << "\nНет прочитанных файлов.";
                }
            }break;
            case 5: {
                if (flag == 1) {
                    Write(pStud, N);
                } else {
                    cout << "\nНет прочитанных файлов.";
                }
            }break;
            case 6: {
                cout << "Завершение работы..." << endl;
                delete [] pStud;
                pStud = nullptr;
            }break;

            default: {
                cout << "\nВведено неверное значение";
            }
        };
    }
};

int Read (Students *S, int n) {   // Указатель на массив, n - кол-во элементов массива
    ifstream reader;
    reader.open("..\\students.txt"); //открываем файл для чтения
    if(reader.is_open()) {
        cout << "Файл прочитан.";
        for (int i=0; i<n; i++) {
            reader >> S[i].name >> S[i].faculty >> S[i].studentsNum >> S[i].goodStudentsNum;
        }
        reader.close();
        return 1;
    } else {
        cout << "Файл не прочитан." << endl;
        return 0;
    }
}

void Print (Students *S, int n) {
    for(int i=0; i<n; i++) {
        cout << i+1 << ". ";
        cout << S[i].name << " " << S[i].faculty << " " << S[i].studentsNum << " " << S[i].goodStudentsNum << endl;
    }
}

void Edit (Students *S) {
    cout << "\nКакую строку вы хотите отредактировать?" << endl;
    cin >> lineNum;
    cout << "\nКакой пункт вы хотите отредактировать?" << endl;
    cout << "1. Название группы" << endl;
    cout << "2. Название факультета" << endl;
    cout << "3. Количество студентов" << endl;
    cout << "4. Количество успевающих студентов" << endl;
    cin >> pointNum;
    cout << "Ваш выбор (без пробелов): " << endl;
    switch (pointNum) {
        case 1: {
            cin >> S[lineNum-1].name;
        }break;
        case 2: {
            cin >> S[lineNum-1].faculty;
        }break;
        case 3: {
            cin >> S[lineNum-1].studentsNum;
        }break;
        case 4: {
            cin >> S[lineNum-1].goodStudentsNum;
        }break;
        default: {
            cout << "\nВведено неверное значение" << endl;
        }
    }
}

float PercentStudents(Students *S, int n) {
    for (int i=0; i<n;i++) {
        studCount += S[i].studentsNum;
        gStudCount += S[i].goodStudentsNum;
        return (gStudCount / studCount) * 100;
    }
}

void Write (Students *S, int n) {
    string newFileName;
    cout << "\nВведите название нового файла" << endl;
    cin >> newFileName;
    newFileName = "..\\" + newFileName +".txt";

    ofstream writer;
    writer.open(newFileName); // открываем/создаем файл для записи
    if (writer.is_open()) {
        cout << "Файл " << newFileName << " создан.";
        writer << "< < < < Строки > > > >" << endl;
        for (int i=0; i<n; i++) {
            writer << S[i].name << " " << S[i].faculty << " " << S[i].studentsNum << " " << S[i].goodStudentsNum << endl;
        }
        writer << "< < < < Процент успевающих студентов > > > >" << endl;
        writer << percent << "%" << endl;
    } else {
        cout << "Ошибка создания файла.";
    }

    writer.close();
}
