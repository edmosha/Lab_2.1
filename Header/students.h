#ifndef UNTITLED_STUDENTS_H
#define UNTITLED_STUDENTS_H


#include <iostream>
#include <fstream>
#include <string>



using namespace std;

struct Students {
    string name = "empty_name";
    string faculty = "empty_faculty";
    float studentsNum = 0;
    int goodStudentsNum = 0;
};

void MENU (); // Главное меню
int Read (Students *S, int n); // Чтение файла
void Print (Students *S, int n); // Вывод строк
void Edit (Students *S); // Редактирование строк
float PercentStudents(Students *S, int n); // Процент успевающих студентов
void Write (Students *S, int n); // Запись в новый файл


#endif //UNTITLED_STUDENTS_H
