#include "main.hpp"
#include <iostream>
using namespace std;

int main()
{

    string filename;
    int empN;

    filename = "employee.txt";
    empN = writeFile(filename);
    cout << "File created with " << empN << " employee records\n";

    empN = readFile(filename);
    cout << "The total number of employess read " << empN << endl;
}