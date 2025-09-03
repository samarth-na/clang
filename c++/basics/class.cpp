#include <iostream>
#include <string>

using namespace std;

// Base class (Inheritance)
class Animal {
   private:	 // Encapsulation (private data)
	std::string name;
	int age;

   protected:  // Encapsulation (protected data, accessible in derived classes)
	std::string species;

   public:	// Encapsulation (public interface)
	// Constructor
	Animal(std::string name, int age, std::string species)
		: name(name), age(age), species(species) {}

	// Destructor
	~Animal() { std::cout << name << " is being destroyed." << std::endl; }

	// Method (Abstraction: hiding internal details)
	void makeSound() { std::cout << "Some generic animal sound!" << std::endl; }

	// Getter (Encapsulation: controlled access)
	std::string getName() const { return name; }

	// Setter (Encapsulation: controlled modification)
	void setName(std::string newName) { name = newName; }

	// Virtual function (Polymorphism: allows overriding in derived classes)
	virtual void displayInfo() const {
		std::cout << "Name: " << name << ", Age: " << age << ", Species: " << species << std::endl;
	}
};

// Derived class (Inheritance)
class Dog : public Animal {
   private:
	std::string breed;

   public:
	// Constructor (initializes base class and derived class attributes)
	Dog(std::string name, int age, std::string breed) : Animal(name, age, "Canine"), breed(breed) {}

	// Method overriding (Polymorphism)
	void makeSound() override { std::cout << "Woof! Woof!" << std::endl; }

	// Method overriding (Polymorphism)
	void displayInfo() const override {
		Animal::displayInfo();	// Call base class method
		std::cout << "Breed: " << breed << std::endl;
	}
};

int main() {
	// Create an object (Encapsulation)
	Dog myDog("Buddy", 3, "Golden Retriever");

	// Call methods (Abstraction)
	myDog.makeSound();	// Output: Woof! Woof!
	myDog.displayInfo();
	/*
	Output:
	Name: Buddy, Age: 3, Species: Canine
	Breed: Golden Retriever
	*/

	// Polymorphism: Base class pointer to derived class object
	Animal* animalPtr = &myDog;
	animalPtr->makeSound();	 // Output: Woof! Woof! (if makeSound is virtual)

	return 0;
}
