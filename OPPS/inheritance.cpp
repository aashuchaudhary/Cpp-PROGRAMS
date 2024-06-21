// #include <bits/stdc++.h>
// using namespace std;

// class human
// {
// private:
//     int a;

// protected:
//     int b;

// public:
//     int c;

//     void function()
//     {
//          a = 10;
//          b = 20;
//          c = 30;
//     }

// };
// int main()
// {
//     human Ashu;
// // only public will be executed
//     // Ashu.a =
//     // Ashu.b =

// //     Ashu.c = 10;
// //     // for within calss we Create a function they can acess only when they are created in class.
// //     Ashu.function();
// // }

// // UNDERSTANDING ABOUT PUBLIC,PROTECTED ,PRIVATE  IN EXTERNAL ,WITHINAND DERIVERD CODE.....

// // External Code

// #include <bits/stdc++.h>
// using namespace std;
// class Human
// {
//     string religion, color;

// public:
//     string name;
//     int age, wt;
// };

// // Child Classs
// class Student : protected Human
// {
// private:
//     int roll, fees;

// public:
//     Student(string name, int age, int wt, int roll, int fees)
//     {
//         this->name = name;
//         this->age = age;
//         this->wt = wt;
//         this->roll = roll;
//         this->fees = fees;
//     }

//     void dispaly()
//     {
//         cout << name << ", Age is " << age << " , weight is " << wt << ", roll number " << roll << "And fees is: " << fees << endl;
//     }
// };
// class Teacher : public Human
// {
//     int salary, id;
// };
// int main()
// {
//     // Student A;
//     // A.name  = 'Ashu'; //shows error becoz it cant axess private class

//     Student A("Ashu", 21, 60, 21, 2100);
//     A.dispaly();

//     Teacher B;
//     B.name = "DIpu";
// }

// TYPES OF INhERITANCE
// 1.SINGlE INHERIATANCE

// #include<bits/stdc++.h>
// using namespace std;
// class human{
//     protected:
//     string name;
//     int age;

//     public:
//     // human()
//     // {
//     //     cout << "Hello human\n";
//     // }
//     human (string name, int age)
//     {
//         this->name = name;
//         this->age = age;
//     }
//     void display()
//     {
//         cout << name << " " << age<< endl;
//     }

//     void work(){
//         cout << "I am working\n" << " ";
//     }
// };

// class student :public human
// {
//     int roll_no, fees;

//     public:
//     student(string name,int age,int fees ,int roll_no):human(name,age )
//     {

//         this->fees = fees;
//         this->roll_no = roll_no;
//     }
//     void display()
//     {
//         cout << name << " " << age << " " << fees << " " << roll_no<<endl;
//     }

//     // student()
//     // {
//     //     cout << "Hello sir\n";
//     // }
//     // ~student()
//     // {
//     //     cout << "Hello Babu\n";
//     // }
// };

// int main()
// {
//     student A1("Ashutosh", 21, 1300, 34);
//     // student A1;
//     A1.display();
// }

// // 2.MULTILEVEL INHERIATANCE

// #include<bits/stdc++.h>
// using namespace std;
// class Person{
//     protected:
//     string name;

//     public:

//     void Introduce()
//     {
//         cout << "Hello my name is : " << name << endl;
//     }
// };
// class Employee:public Person
// {
//     protected:
//         int Salary;

//     public:
//     void Monthly_Salary()
//     {
//         cout << "My Monthly Salary is: "<<Salary<<endl;
//     }
// };

// class Manager: public Employee
// {
//     public:
//         string department;

//     Manager (string name, int Salary, string department)
//     {
//         this->name = name;
//         this->Salary = Salary;
//         this->department = department;
//     }
//     void Work()
//     {
//         cout << "I am leding the department" << department<<endl;
//     }
// };
// int main()
// {
//     Manager A1("Ashutosh",1000, "RS department");
//     A1.Work();
//     A1.Monthly_Salary();
//     A1.Introduce();
//     A1.department = "heheh";
//     // A1.Salary() = 10;
//     // A1.display;
// }

// // 3.MULTIple INHERIATANCE

// #include <bits/stdc++.h>
// using namespace std;
// class Engineer
// {

//     void money()
//     {
//         cout << "money is: " << endl;
//     }

// public:
//     string specialisation;
//     Engineer() 
//     {
//         cout << "hello i am engineer: "<<endl;
//     }
//     void work()
//     {
//         cout << "I have specialisation " << specialisation << endl;
//     }
// };

// class Youtube
// {
// public:
//     int Subscribers;

//     Youtube()
//     {
//         cout << "hello i am youtuberr : "<<endl;
//     }
//     void Content_Creater()
//     {
//         cout << "I have a Subscriber base of " << Subscribers << endl;
//     }
// };
// class CodeTeacher : public Engineer, public Youtube
// {
// public:
//     string name;
//     CodeTeacher()
//     {
//         cout << "hello i am codeTeacher: "<<endl;
//     }

//     CodeTeacher(string name, string specialisation, int Subscribers)
//     {
//         this->name = name;
//         this->specialisation = specialisation;
//         this->Subscribers = Subscribers;
//     }
//     void Showcase()
//     {
//         cout << "My name is: " << name << endl;
//         work();
//         Content_Creater();
//     }
// };

// int main()
// {
//     // CodeTeacher A1("Ashutosh", "Cse_ds", 68687);
//     // A1.Showcase();
//     // // A1.money();   // not excess becoz it is in private class
//     CodeTeacher A1;
// }

// // 3.HIERACHICAL  INHERIATANCE
#include<bits/stdc++.h>
using namespace std;
int main()
{

}
