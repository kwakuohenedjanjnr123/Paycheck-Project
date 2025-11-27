#include <iostream>
using namespace std;
// PayCheck Project


int main() {
    //Declare variables
    float baseSalary;
    int years;
    float sales;
    float firstBonus;
    float secondBonus;
    float netSalary;
    string fullName;


    cout<<"Enter your full name \n";
    getline(cin,fullName);
    //The base salary of the salesperson
    cout<<"Enter your base salary:\n";
    cin>>baseSalary;
    // The number of years the salesperson has worked there
    cout<<"Enter your years:\n";
    cin>>years;
    //The sales made within the month
    cout<<"Enter your monthly sales:\n";
    cin>>sales;
    //Finding the firstBonus based on the number of years
    if (years <= 5) {
        firstBonus = 10 * years;
    } else {
        firstBonus = 20 * years;
    }
    //secondBonus is based on sales made within the month
    if (sales >= 5000 && sales < 10000 ) {
        secondBonus = 0.03 * sales;
    } else if (sales >= 10000) {
        secondBonus = 0.06 * sales;
    }else {
        secondBonus = 0 * sales;
    }
    netSalary = baseSalary + firstBonus + secondBonus;



    cout<<"___________________ Paycheck_______________\n";
    cout<<"__________________Kwaku Junior Enterprise_____________\n";
    cout<<"Full name   : "<<fullName<<endl;
    cout<<"Base Salary : $"<<baseSalary<<endl;
    cout<<"First Bonus : $"<<firstBonus<<endl;
    cout<<"Second Bonus: $"<<secondBonus<<endl;
    cout<<"Net Salary  : $"<<netSalary<<endl;





}