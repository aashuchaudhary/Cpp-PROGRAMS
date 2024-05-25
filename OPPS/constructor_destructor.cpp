// #include<bits/stdc++.h>
// using namespace std;
// class Customer
// {
//     string name;
//     int acc_no;
//     int balance;
// public:
// default Consturctor

//     Customer()
//     {
//         cout << "Customer is been \n";
//     }
// };
// int main(){
//     Customer A1;
// }

/*

#include <bits/stdc++.h>
using namespace std;
class Customer
{
    string name;
    int acc_no;
    int balance;
    int *roi;

public:
    Customer()
    {
        name = "Ashu";
        acc_no = 123;
        balance = 1000;
        roi = new int[100];
    }

    // Parameterised Consturctor
    // Customer(string a, int b, int c)
    // {
    //     name = a;
    //     acc_no = b;
    //     balance = c;
    // }

    // OR

    // Customer(string name, int acc_no, int balance)
    // {
    //     this->name = name;
    //     this->acc_no = acc_no;
    //     this->balance = balance;
    // }

    // Parameterised Consturctor
    Customer(string a, int b)
    {
        name = a;
        acc_no = b;
        balance = 50;
    }
    // Constructor overloading means constructor having same name but it takes diff parameter.


    // inline constructor

    Customer(string a,int b,int c):name(a),acc_no(b),balance(c)
    {

    }

    void display()
    {
        cout << name << " " << acc_no << " " << balance << endl;
    }


// Copy Constructor

    Customer(Customer &B)
    {
        name = B.name;
        acc_no = B.acc_no;
        balance = B.balance;
    }
};
int main()
{
    Customer A1;
    // Customer A2("Ashu", 87, 2000);
    Customer A3("Yoyo",234);


    A1.display();
    // A2.display();
    A3.display();

    Customer A4(A3);
    A4.display();

// Another way of initailisation.

    Customer A5;
    A5 = A3;
    A5.display();
}
*/


// DESTRUCTOR

// #include<bits/stdc++.h>
// using namespace std;
// class Customer {
// string name;
// int *balance;

// public:

// Customer()
// {
//     name = "Ashu";
//     balance = new int;
//     *balance = 10;
//     cout << "Constructor is called\n";
// }
// // Customer(string name,int bal)
// // {
// //     this->name = name;
// //     balance = new int;
// //     *balance = bal;   
// // }

// // Destructor 
// ~Customer()
// {
//     delete balance;
//     cout << "Destructor is called\n";
// }

#include<bits/stdc++.h>
using namespace std;
class Customer {
string name;
int *balance;

public:
Customer()
{
    name = "4";
    cout << "The no is " << name << endl;
}

Customer(string name)
{
    this->name = name;

    cout <<"Constructor is: "<<name << endl;
}
// Customer(string name,int bal)
// {
//     this->name = name;
//     balance = new int;
//     *balance = bal;   
// }

// Destructor 
~Customer()
{
    cout << "Destructor is: "<<name<<endl;
}

};

 int main(){
     Customer A1("1"),A2("2"),A3("3");
     Customer *A4 = new Customer;
     delete A4;  // used to relaease memory if constructor.
 }