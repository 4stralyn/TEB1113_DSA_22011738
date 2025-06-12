/*Name: Nur Aina Najwa Binti Rosdi
ID: 22011738
Group: G3
Lab: L1
*/

#include <iostream>
using namespace std;

struct Student {
    string id;
    string name;
    string contact;
    string email;
};

int main() {
    Student student[5];

   
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << "\n";
        cout << "Enter ID: ";
        cin >> student[i].id;
        cout << "Enter name: ";
        cin >> student[i].name;
        cout << "Enter contact: ";
        cin >> student[i].contact;
        cout << "Enter email: ";
        cin >> student[i].email;
        cout << "--------------------------------------------------\n";
    }

    
    cout<<"\n_________________STUDENTS RECORD_________________\n";
    cout<<"\nTotal student: 5\n";
    for (int i = 0; i < 5; i++) {
        cout << "STUDENT " << i + 1 << "\n";
        cout << "ID: " << student[i].id << "\n";
        cout << "Name: " << student[i].name << "\n";
        cout << "Contact: " << student[i].contact << "\n";
        cout << "Email: " << student[i].email << "\n";
        cout << "--------------------------------------------------\n";
    }
    
    cout << "\nThank you for using this service.";

    return 0;
}
