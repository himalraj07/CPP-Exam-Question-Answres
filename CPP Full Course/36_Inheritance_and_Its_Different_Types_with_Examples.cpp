/*
    36. Inheritance & Its Different Types with Examples in C++
*/


/*
    Inheritance is a fundamental feature of object-oriented programming (OOP) that allows one class to inherit properties and behaviors from another class. In C++, there are several types of inheritance that facilitate code reuse and the creation of class hierarchies. Let's explore each type of inheritance along with examples:

    1. Single Inheritance:
    Single inheritance involves a derived class inheriting the properties and behaviors of a single base class. It forms a simple one-to-one relationship between classes. Here's an example:

    ```cpp
    class Shape {
    public:
        void draw() {
            cout << "Drawing a shape." << endl;
        }
    };

    class Circle : public Shape {
    public:
        void drawCircle() {
            cout << "Drawing a circle." << endl;
        }
    };
    ```

    In the example above, the class `Circle` inherits from the base class `Shape`. The `Circle` class can access the `draw()` function defined in the `Shape` class.

    2. Multiple Inheritance:
    Multiple inheritance allows a derived class to inherit properties and behaviors from multiple base classes. It enables a derived class to combine features from multiple sources. Here's an example:

    ```cpp
    class Mammal {
    public:
        void eat() {
            cout << "Eating..." << endl;
        }
    };

    class Flyer {
    public:
        void fly() {
            cout << "Flying..." << endl;
        }
    };

    class Bat : public Mammal, public Flyer {
    public:
        void display() {
            cout << "I am a bat." << endl;
        }
    };
    ```

    In the above example, the class `Bat` inherits from both `Mammal` and `Flyer` classes. The `Bat` class can access the `eat()` function from `Mammal` and the `fly()` function from `Flyer`.

    3. Multilevel Inheritance:
    Multilevel inheritance refers to a class inheriting from a derived class, forming a parent-child-grandchild relationship. It allows the creation of a hierarchical structure of classes. Here's an example:

    ```cpp
    class Vehicle {
    public:
        void drive() {
            cout << "Driving a vehicle." << endl;
        }
    };

    class Car : public Vehicle {
    public:
        void start() {
            cout << "Car started." << endl;
        }
    };

    class SportsCar : public Car {
    public:
        void accelerate() {
            cout << "Sports car accelerating." << endl;
        }
    };
    ```

    In this example, the `Car` class inherits from the `Vehicle` class, and the `SportsCar` class inherits from the `Car` class. As a result, the `SportsCar` class can access the `drive()` function from `Vehicle` and the `start()` function from `Car`.

    4. Hierarchical Inheritance:
    Hierarchical inheritance involves multiple derived classes inheriting from a single base class. It allows for specialization and differentiation of classes. Here's an example:

    ```cpp
    class Animal {
    public:
        void eat() {
            cout << "Animal is eating." << endl;
        }
    };

    class Lion : public Animal {
    public:
        void roar() {
            cout << "Lion is roaring." << endl;
        }
    };

    class Elephant : public Animal {
    public:
        void trumpet() {
            cout << "Elephant is trumpeting." << endl;
        }
    };
    ```

    In the example above, both the `Lion` and `Elephant` classes inherit from the `Animal` class. They share the `eat()` function from the `Animal` class and have their own unique functions (`roar()` and `trumpet()`).

    These are the most commonly used types of inheritance in C++. By utilizing these inheritance types, you can create class hierarchies, reuse code, and establish relationships between classes.
*/