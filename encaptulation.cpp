#include <iostream>
using namespace std;

class Employee {
  private:
    // Private attribute
    int salary;

  public:
    // Setter
    void setSalary(int s) {
      salary = s;
    }
    // Getter
    void getSalary() {
      cout<<" pay of this month"<<endl;
    }
};

int main() {
  Employee e1;
  e1.setSalary(5000);
  e1.getSalary();
  return 0;
}
