// Static member can directly Access static int Total_no;

#include <bits/stdc++.h>
using namespace std;

class customer
{
    string name;
    int acc_no, bal;

    int age;
public:

    customer(string name, int acc_no, int bal,int age)
    {
        this->name = name;
        this->acc_no = acc_no;
        this->bal = bal;
        this->age = age;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            bal += amount;
           
        }
        else{
            cout << "Invalid amount: ";
        }
    }

void updateage(int age){
    if(age>0 && age<100)
    {
        this->age = age;

    }
    else{
        cout << "Invalid Age"<<endl;
    }
}

    void withdraW(int amount)
    {
        if (amount < bal && amount > 0)
        {
            bal -= amount;
            
        }
    }

    void display()
    {
        cout << name << " " << acc_no << " " << bal << " " << age <<  endl;
    }


};


int main()
{
    customer A1("Ashu", 1, 1000,7);
    
    customer A2("Dipu", 2, 1800,9);
   
    customer A3("Appu", 3, 2800,12);

    A1.updateage(-24);
    A1.deposit(210);
    A1.display();
}

