#include<bits/stdc++.h>
using namespace std;
// class

class student{
    string s;
    public:
        string name;
        int age;
        bool gender;
    void printinfo()
    {
        cout << "Name =" << name << endl;
        cout << "Age = " << age << endl;
        cout << "Gender = " << gender << endl;
    }
};

int main(){

        student a;
        a.name = "tinu";
        a.age = 20;
        a.gender = 0;
        return 0;

        student arr[2];
        for (int i = 0; i < 3;i++)
        {
            cout << "name = ";
            cin>> arr[i].name;
            cout << "age = ";
            cin>> arr[i].age;
            cout << "gender =";
            cin>> arr[i].gender;
        }

        for (int i = 0; i < 2;i++)
        {
            arr[i].printinfo();
        }
}