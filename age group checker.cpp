#include<iostream>
using namespace std;
int main ()
{
    int age;
    cout<<"Enter the age: ";
    cin>>age;
    if(age>0 && age<13)
    {
        cout<<"Child";
    }
    else if(age>=13 && age<=19)
    {
        cout<<"Teenager";
    }
    else if(age>=20 && age<=59)
    {
        cout<<"Adult";
    }
    else{
        cout<<"Senior";
    }
}
