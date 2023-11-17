#include <iostream>
using namespace std;

class Animal {
  public:
    void animalSound() {
      cout << "The animal makes a sound \n";
    }
};

// Derived class
class fish : public Animal {
  public:
    void animalSound() {
      cout << "The fish says: wee wee \n";
    }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
      cout << "The dog says: bow wow \n";
    }
};

int main() {
  Animal a1;
  fish f1;
  Dog d1;

  a1.animalSound();
  f1.animalSound();
  d1.animalSound();
  return 0;
}