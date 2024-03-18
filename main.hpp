#include <iostream>
#include <fstream>
using namespace std;

int writeFile(string filename){
    ofstream ofs;

    ofs.open("employee.txt");
    if (!ofs)
    {
        cout << "File Open Error\n";
        exit(0);
    }

    int id, num;
    string name, department;
    double salary;

    cout << "Enter number of lines: ";
    cin >> num;
    ofs << num << endl;
    for (int i = 0; i < num; i++)
    {
        // Write to file

        cout << "Enter Employee ID: ";
        cin >> id;
        ofs << id << " ";
        cout << "Enter Employee Name: ";
        cin >> name;
        ofs << name << " ";
        cout << "Enter Employee Department: ";
        cin >> department;
        ofs << department << " ";
        cout << "Enter Employee Salary: ";
        cin >> salary;
        ofs << salary << endl;
    }

    ofs.close();
}
int readFile(string filename){
    ifstream ifs;
    double total = 0, average = 0;
    ifs.open("employee.txt");
    if (!ifs)
    {
        cout << "File Open Error\n";
        exit(0);
    }
    cout << "ID"
         << "\t"
         << "Name"
         << "\t"
         << "Department"
         << "\t"
         << "Salary" << endl;

    // code to read from file
    int num;
    ifs >> num;
    for (int i = 0; i < num; i++)
    {
        int id;
        string name, department;
        double salary;
        ifs >> id >> name >> department >> salary;
        total += salary;
        cout << id << "\t" << name << "\t" << department << "\t" << salary << endl;
    }
    cout << "Total Salary: " << total << endl;
    average = total / num;
    cout << "Average Salary: " << average << endl;
}