#include <iostream>
#include <vector>
#include <memory>
#include <string>
using namespace std; // used to avoid prefixing elements with std::

class Animal {
protected:
    string name;
    string breed;
public:
    Animal(string n, string b) : name(n), breed(b) {}
    virtual ~Animal() {}

    virtual string sound() const {
        return "Some generic animal sound";
    }

    string getName() const { return name; }
    string getBreed() const { return breed; }
};

class Dog : public Animal {
public:
    Dog(string n, string b) : Animal(n, b) {}

    string sound() const override {
        return "Woof";
    }
};

class Cat : public Animal {
public:
    Cat(string n, string b) : Animal(n, b) {}

    string sound() const override {
        return "Meow";
    }
};

// Concept to check if a type is derived from Animal
template <typename T>
concept IsAnimal = std::is_base_of<Animal, T>::value;

// Function with a constraint that only accepts types derived from Animal
template <IsAnimal T>
void animalSounds(const std::vector<T*>& animals) {
    for (const auto& animal : animals) {
        std::cout << animal->sound() << std::endl;
    }
}

int main() {
    Dog indigo("Indigo", "Labradoodle");
    Cat louis("Louis", "Tuxedo Cat");
    Cat jellybean("Jellybean", "Tabby Cat");

    // Use pointers to Animal objects
    vector<Animal*> animals = {&indigo, &louis, &jellybean};
    vector<Cat*> cats = {&louis, &jellybean};

    // Works for all animals
    animalSounds(animals);
    
    // Works only for Cat pointers (also derived from Animal)
    animalSounds(cats);

    return 0;
}
