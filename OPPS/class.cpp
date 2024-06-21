// #include<bits/stdc++.h>
// using namespace std; 


// // es method mai hmlog bar bar code likh rhe hai jsi se bhut time lag jaa ra hai or isko easy karne ke liea hmlog oops ka use krenge class and obj bna ke

// void fun(){
//     string name;
//     int age, roll_number;
//     string grade;
// }

// int main()
// {
//     string name;
//     int age, roll_number;
//     string grade;

//     cin >> name >> age >> roll_number >> grade;

//     string name1;
//     int age1, roll_number1;
//     string grade1;

//     cin >> name1 >> age1 >> roll_number1 >> grade1;


// }

// Using private 

// #include<bits/stdc++.h>
// using namespace std;
//  class student
//  {
//     private:
//      string name;
//      int age, roll_number;
//      string grade;
//  };
// int main(){

//     // object
//     student S1;
//     S1.name = "Ashu";
//     S1.age = 21;
//     S1.roll_number = 2;
//     S1.grade = "A++";

//     cout << S1.age<<" ";

//     student S2;
//     S2.name = "Appu";
//     S2.age = 20;
//     S2.roll_number = 2;
//     S2.grade = "A++";

//     cout << S2.name<<" ";
//     }

// using public

// #include<bits/stdc++.h>
// using namespace std;
//  class student
//  {
//     public:
//      string name;
//      int age, roll_number;
//      string grade;
//  };
// int main(){

//     // object
//     student S1;
//     S1.name = "Ashu";
//     S1.age = 21;
//     S1.roll_number = 2;
//     S1.grade = "A++";

//     cout << S1.age<<" ";

//     student S2;
//     S2.name = "Appu";
//     S2.age = 20;
//     S2.roll_number = 2;
//     S2.grade = "A++";
    
//     cout << S2.name<<" ";
//     }


// adding function in class and using public for function to print int object, becaus ehmlog private ko direct use nhi kar kste usko resolve karne ke liea hmlog isko use kar rhe hai.

// #include<bits/stdc++.h>
// using namespace std;
//  class student
//  {
//     private:
//      string name;
//      int age, roll_number;
//      string grade;

// // function getter and setter

//      public:
//      void setname(string n)
//      {
//         // if invalid string is pased then
//         if(n.size() == 0)
//         {
//             cout<<"Invalid name: "<<endl;
//             return;
//         }
//          name = n;
//      }
//      void setage(int x)
//      {
//         if(age<0 || age>100)
//         {
//             cout << "Inavalid age"<<endl;
//             return;

//         }
//          age = x;
//      }
//      void setroll_no(int r)
//      {
//          roll_number = r;
//      }
//      void setgrade(string g)
//      {
//          grade = g;
//      }

//     //  Greater Function

//     void getname()
//     {
//         cout << name<<endl;
//     }
//     void getage()
//     {
//         cout << age<<endl;
//     }
//     // void getroll_number()
//     // {
//     //     cout << roll_number<<endl;
//     // }
//     string  getgrade(int pin)
//     {
//         if(pin == 123)
//             return grade;
//         return " ";
//     }

//     // if we want to print in main fuc inside obj then.

//     int getroll_number()
//     {
//         return roll_number;
//     }
//  };
// int main(){

//     // object
//     student S1;
//     // S1.setname("Ashu");
//     S1.setname("");  //invalid string
//     S1.setage(121);
//     S1.setroll_no(1);
//     S1.setgrade("A+");

//     S1.getname();
//     S1.getage();
//     // S1.getroll_number();
//     cout<<S1.getgrade(123)<<endl;

//     cout << S1.getroll_number() << endl;
//     }

// size of obj and concept of padding with proper allignment to minimize space .

// #include<bits/stdc++.h> 
// using namespace std; 
// class a
// {
//     int a;
//     char c;  
//     char b;
//     double e;
// };
// int main(){
//     a obj;
//     cout << sizeof(obj) << " ";
// }


// using pointer to call func in class
#include<bits/stdc++.h> 
using namespace std; 
class Student
{
    public:
        string name;
        int age, roll_no;
        string grade;
};
int main(){
    Student *S = new Student;
    // S->name = "Ashu";
    (*S).name = "Ashu";
    (*S).age = 21 ;
    (*S).roll_no = 2 ;
    (*S).grade = "A++";

    cout << S->name << " ";
    cout << S->age << " ";
    cout << S->roll_no << " ";
    cout << S->grade<< " ";

<<<<<<< HEAD
}
=======
    // S->name = "Ashu";
}
/* // using pointer to call func in class
#include<bits/stdc++.h> 
using namespace std; 
class Student
{
    public:
        string name;
        int age, roll_no;
        string grade;
};
int main(){
    Student *S = new Student;
    (*S).name = "Ashu";
    (*S).age = 21 ;
    (*S).roll_no = 2 ;
    (*S).grade = "A++";

    cout << S->name << " ";
    cout << S->age << " ";
    cout << S->roll_no << " ";
    cout << S->grade<< " ";

    // S->name = "Ashu";
} */
>>>>>>> 7ce11c0ae0ea1045e1828d2231d6ad3da9ebb35b
