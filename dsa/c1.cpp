#include<bits/stdc++.h>
using namespace std;
// class

class student{
   
    public:
        string name;
        int age;
        bool gender;
    void printinfo()
    {

        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "Name =";
       cout << name << endl;
       cout << "Age = ";
       cout<< age << endl;
       cout << "Gender = ";
       cout<< gender << endl;
    }
};

int main(){

    

        student arr[3];
        for (int i = 0; i < 3;i++)
        {
            cout << "name = ";
            cin>> arr[i].name;
            cout << "age = ";
            cin>> arr[i].age;
            cout << "gender =";
            cin>> arr[i].gender;
        }

        for (int i = 0; i < 3;i++)
        {
            arr[i].printinfo();
        }
        return 0;
}