#include<iostream>
#include<string>
using namespace std;
class Employ{
    private:
    string name;
    int ID;
    float salary;
    string Department;
    string DOB;
    public:
    Employ(string n , string dep,  string dob,int id , float sal ){
       name = n;
      ID = id;
      salary = sal;
      Department = dep;
      DOB = dob;


    }
    Employ() {
    name = "";
     Department = "";
      DOB = "";
    ID = 0;
    salary = 0.0;
   
   
}

    void display(){
        cout<<"Name is:"<<name<<endl;
        cout<<"ID is :"<<ID<<endl;
        cout<<"salary is:"<<salary<<endl;
        cout<<"Department is :"<<Department<<endl;
        cout<<"Date of birth is:"<<DOB<<endl;
    }
    float getSalary(){
        return salary;
    }
    string getDOB() {
    return DOB;
}

};
int monthToNumber(string m) {
    if(m == "Jan") return 1;
    if(m == "Feb") return 2;
    if(m == "Mar") return 3;
    if(m == "Apr") return 4;
    if(m == "May") return 5;
    if(m == "Jun") return 6;
    if(m == "Jul") return 7;
    if(m == "Aug") return 8;
    if(m == "Sep") return 9;
    if(m == "Oct") return 10;
    if(m == "Nov") return 11;
    return 12; // Dec
}


int main(){
  Employ e[5];
  for(int i=0;i<5;i++){
    string name , department , Date;
    int ID;
    float salary;
    
    cout<<"Enter name:"<<endl;
    cin.ignore();
    getline(cin,name);
    cout<<"Enter department:"<<endl;
    getline(cin,department);
    cout<<"Enter date of birth:"<<endl;
    getline(cin,Date);
    cout<<"Enter id:"<<endl;
    cin>>ID;
    cout<<"Enter your salary:"<<endl;
    cin>>salary;
    e[i]=Employ(name,department,Date, ID , salary);


  }

  cout<<"Employ details are:"<<endl;
  for(int i=0;i<5;i++){
    e[i].display();
  }
  float largest = e[0].getSalary();
float secondLargest = -1;

for(int i = 1; i < 5; i++) {
    float sal = e[i].getSalary();

    if(sal > largest) {
        secondLargest = largest;
        largest = sal;
    }
    else if(sal < largest && sal > secondLargest) {
        secondLargest = sal;
    }
}

cout << "\nSecond Largest Salary is: " << secondLargest << endl;
cout << "\nEmployee Ages:\n";

string today = __DATE__;
int currDay = stoi(today.substr(4, 2));
int currYear = stoi(today.substr(7, 4));
int currMonth = monthToNumber(today.substr(0, 3));

for(int i = 0; i < 5; i++) {
    string dob = e[i].getDOB();

    int birthDay = stoi(dob.substr(0, 2));
    int birthMonth = stoi(dob.substr(3, 2));
    int birthYear = stoi(dob.substr(6, 4));

    int y = currYear - birthYear;
    int m = currMonth - birthMonth;
    int d = currDay - birthDay;

    if(d < 0) {
        d += 30;
        m--;
    }
    if(m < 0) {
        m += 12;
        y--;
    }

    cout << "Employee " << i + 1 << " Age: "
         << y << " years " << m << " months " << d << " days\n";
}


}