#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Students {
    string name = "empty_name";
    string faculty = "empty_faculty";
    int studentsNum = 0;
    int goodStudentsNum = 0;
};
//test

int flag = 0, num, N, lineNum, pointNum, studCount = 0, gStudCount = 0;
//float percent;
Students *S = new Students[N];

void MENU (); // Главное меню
int Read (Students *S, int n); // Чтение файла
void Print (Students *S, int n); // Вывод строк
void Edit (Students *S); // Редактирование строк
void PercentStudents(Students *S); // Процент успевающих студентов
void Write (Students *S, int n); // Запись в новый файл