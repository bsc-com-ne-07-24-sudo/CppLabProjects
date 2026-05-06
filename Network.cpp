#inlcude <iostream>
using namespace std;

class Network
{
    public:
    int year;
    string name;
    string course;
    int age;
};
int main() 
{
    Network Contie;
    Contie.year = 2;
    Contie.name = john;
    Contie.course = " Network design ";

    cout << Contie.year << " \n";
    cout << Contie.name << " \n";
    cout << Contie.course << " \n";
    return 0;
}


class Computer
{
    public:
    int year;
    string course;
    float GPA;
    string name;
    string program;
    string position;
};
int main() 
{
computer student;
student.year = 2;
student.course = "network engineering";
student.GPA = 4.0;
student.name = " VINCENT ";
student.program = "computer network engineering";
student.position = " network adminstrator";

computer candidate;
candidate.program = "computer science";
candidate.position = " a developer";
cout << student.year << " \n";
cout << student.course << " \n";
cout << student.GPA << " \n";
cout << student.name << " \n";
cout << student.program << " \n";
cout << student.position << " \n";
cout << " candidate : " << candidate.program << " \n";
cout << " candidate: " << candidate.position << " \n"
return 0;
}