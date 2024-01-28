// OOPS - stands for Object Orinted Programming. It is help to reusability and maintainebilyty of code Actualy this concept real entity to convert in code. There are we know about class.They have four filler of this concept ...

#include<iostream>
using namespace std;

class student {
    public:
    string name;
    int roll, age;
    string Bgroup;
};

int main()
{
    student s1;
    s1.name = "Pradum";
    s1.roll = 10;
    s1.age = 24;
    s1.Bgroup = "A+";

    cout<<s1.name<<endl;
    cout<<s1.roll<<endl;
    cout<<s1.age<<endl;
    cout<<s1.Bgroup<<endl;

    student s2;
    s2.name = "Singla";
    s2.roll = 70;
    s2.age = 34;
    s2.Bgroup = "B+";

    cout<<s2.name<<endl;
    cout<<s2.roll<<endl;
    cout<<s2.age<<endl;
    cout<<s2.Bgroup<<endl;
return 0;
};
