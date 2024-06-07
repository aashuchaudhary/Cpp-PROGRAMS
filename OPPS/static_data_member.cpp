// Static member can directly Access static int Total_no;

#include <bits/stdc++.h>
using namespace std;

// Total_no =0
// A1:name acc balance tot
// A2:name acc balance tot

class customer
{
    string name;
    int acc_no, bal;

    // They are  attributes of Classes or Class memeber

    static int Total_no; // yeea jb private ka  part hai so hm total no ko acess nhi kar paa rhe thai usko acess kar paye shif class ki help se uske liea hmlog static function ka use karte hai....

    // we can acces it by without object,when it is inside public.
    static int total_bal;

public:
    // static int Total_no;
    customer(string name, int acc_no, int bal)
    {
        this->name = name;
        this->acc_no = acc_no;
        this->bal = bal;
        Total_no++;
        total_bal += bal;
    }

    // static memeber function can accss static function
    static void accesStatic()
    {
        cout << "Total no of Customer: "<< Total_no << endl;
        cout << "Total balance Remains: "<< total_bal << endl;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            bal += amount;
            total_bal += amount;
        }
    }
    void withdraW(int amount)
    {
        if (amount < bal && amount>0)
        {
            bal -= amount;
            total_bal -= amount;
        }
    }

  

    void display()
    {
        cout << name << " " << acc_no << " " << bal << " " << Total_no << endl;
    }
    void display_total()
    {
        cout << Total_no << endl;
    }
};

int customer::Total_no = 0;
int customer::total_bal = 0;

int main()
{
    customer A1("Ashu", 1, 1000);
    // A1.display_total();
    customer A2("Dipu", 2, 1800);
    // A2.display_total();
    customer A3("Appu", 3, 2800);
    // A3.display_total();

    // class member can be diret Accessed when  Staic and  withot object with calling

    // customer::Total_no = 5;  //isko acess krne ke liea isko private publicc mai ek function bana na pdega.

    // customer::accesStatic();
    // A1.display_total();

    // Deposite money
    A1.deposit(700);
    A2.withdraW(200);
    customer::accesStatic();
}


// STATIC USKO BANATE HAI JO SBKE LIEA COMMON HO ......