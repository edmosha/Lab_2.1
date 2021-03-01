#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Students {
    string name = "none";
    string faculty = "none";
    int studentsNum = 0;
    int goodStudentsNum = 0;
};

int flag = 0, num, N, lineNum, pointNum, studCount = 0, gStudCount = 0;
string newFile;
Students *S = new Students[N];

void MENU ();
int Read (Students *S, int n);
void Print (Students *S, int n);