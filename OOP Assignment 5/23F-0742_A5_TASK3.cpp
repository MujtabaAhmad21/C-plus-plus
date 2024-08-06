#include<iostream>
#include<string>
using namespace std;

class shop {
private:
    int ID;
    string name;
    string post;
    int salary;
    string status;

public:
    shop()
    {
        ID = 0;
        name = "0";
        post = "0";
        salary = 0;
        status = "0";
    }

    void operator-(string sta) {

        status = sta;
    }

    void operator*(int id) {
        if (ID == id) {
            salary += salary * 0.1;
        }
    }

    shop operator+(shop& obj) {
        shop result;
        result.salary = this->salary + obj.salary;
        return result;
    }

    void operator++() {
        salary += 5000;
    }

    void operator--() {
        salary -= 5000;
    }

    bool operator==(shop obj) {
        return salary == obj.salary;

    }

    bool operator!=(shop obj)
    {
        return salary != obj.salary;

    }

    int getID() {
        return ID;
    }

    int getSalary() {
        return salary;
    }

    friend istream& operator>>(istream& in, shop& obj);
    friend ostream& operator<<(ostream& out, const shop& obj);
};

istream& operator>>(istream& in, shop& obj) {
    cout << "Enter id: ";
    in >> obj.ID;
    in.ignore(); 
    cout << "Enter name: ";
    getline(in, obj.name);
    cout << "Enter post: ";
    getline(in, obj.post);
    cout << "Enter salary: ";
    in >> obj.salary;
    in.ignore(); 
    cout << "Enter status: ";
    getline(in, obj.status);
    return in;
}


ostream& operator<<(ostream& out, const shop& obj) {
    out << "Id is = " << obj.ID << endl;
    out << "Name is = " << obj.name << endl;
    out << "Post is = " << obj.post << endl;
    out << "Salary is = " << obj.salary << endl;
    out << "Status is = " << obj.status << endl;
    return out;
}

int main() {
    shop emp[5];
    cout << "Enter data of each employee: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Data of employee " << i + 1 << ": " << endl;
        cin >> emp[i];
    }

    cout << "Displaying data of employees: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << emp[i] << endl;
    }
    int newID;
    cout << "Enter new id to update the status: ";
    cin >> newID;
    string newStatus;
    for (int i = 0; i < 5; i++)
    {

        if (emp[i].getID() == newID)
        {
            cout << "Enter the new status of the employee: ";
            cin >> newStatus;
            emp[i] - newStatus;
        }

        int incID;
        cout << "Enter Id to increase salary: ";
        cin >> incID;
        for (int i = 0; i < 5; i++)
        {
            emp[i] * incID;
        }

        for (int i = 0; i < 5; i++)
        {
            ++emp[i];
        }

        for (int i = 0; i < 5; i++)
        {
            --emp[i];
        }

        cout << "Employees with equal salary: " << endl;
        for (int i = 0; i < 5; i++)
        {
            for (int j = i + 1; j < 5; j++)
            {
                if (emp[i] == emp[j])
                {
                    cout << emp[i] << endl << emp[j] << endl;
                }
            }
        }

        cout << "Employees with unequal salary: " << endl;
        for (int i = 0; i < 5; i++) {
            for (int j = i + 1; j < 5; j++) {
                if (emp[i] != emp[j]) {
                    cout << emp[i] << endl << emp[j] << endl;
                }
            }
        }
    }

    shop totalSalary;
    for (int i = 0; i < 5; i++) {
        totalSalary = totalSalary + emp[i];
    }
    cout << "Total Salary of all employees: " << totalSalary.getSalary() << endl;


    system("pause");
    return 0;
}