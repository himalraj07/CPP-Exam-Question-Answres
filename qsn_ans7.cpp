/*
    Q7. We want to store the information of different vehicles. Create a class named Vehicle with two data members named mileage and price. Create its two subclasses:
    • Car with data members to store ownership cost, warranty (by years), seating capacity and fuel type (diesel or petrol).
    • Bike with data members to store the number of cylinders, number of gears, cooling type (air, liquid or oil), wheel type (alloys or spokes) and fuel tank size (in inches).
    Make another two subclasses Audi and Ford of Car, each having a data member to store the model type.
    Next, make two subclasses Bajaj and TVS, each having a data member to store the make-type.
    Now, store and print the information of an Audi and a Ford car (i.e. model type, ownership cost, warranty, seating capacity, fuel type, mileage and price.)
    Do the same for a Bajaj and a TVS bike.
*/

#include <iostream>
using namespace std;

class Vehicle
{
    int mileage, price;

public:
    Vehicle() {}

    Vehicle(int mil, int prc)
    {
        mileage = mil;
        price = prc;
    }

    void dis()
    {
        cout << "Mileage : " << mileage << " KM/L" << endl;
        cout << "Price : "
             << "Rs. " << price << endl;
    }
};

class car : public Vehicle
{
    int owner_cost, warranty, seat_capacity;
    string fuel_type;

public:
    car() {}

    car(int mil, int prc, int cst, int war, int sc, string ft) : Vehicle(mil, prc)
    {
        owner_cost = cst;
        warranty = war;
        seat_capacity = sc;
        fuel_type = ft;
    }

    void read()
    {
        dis();
        cout << "Ownership cost : "
             << "Rs. " << owner_cost << endl;
        cout << "Warrnty : " << warranty << " Years" << endl;
        cout << "Seat capacity : " << seat_capacity << " Seats" << endl;
        cout << "Fuel type : " << fuel_type << endl;
    }
};

class Audi : public car
{
    string model_type;

public:
    Audi() {}

    Audi(int mil, int prc, int cst, int war, int sc, string ft, string mt) : car(mil, prc, cst, war, sc, ft)
    {
        model_type = mt;
    }

    void read()
    {
        car::read();
        cout << "Model type = " << model_type << endl;
    }
};

class Ford : public car
{
    string model_type;

public:
    Ford() {}

    Ford(int mil, int prc, int cst, int war, int sc, string ft, string mt) : car(mil, prc, cst, war, sc, ft)
    {
        model_type = mt;
    }

    void read()
    {
        car::read();
        cout << "Model type = " << model_type << endl;
    }
};

class bike : public Vehicle
{
    int no_of_cylinder, no_of_gears;
    float fuel_tank_size;
    string cooling_type, wheel_type;

public:
    bike() {}

    bike(int mil, int prc, int noc, int nog, float fts, string ct, string wt) : Vehicle(mil, prc)
    {
        no_of_cylinder = noc;
        no_of_gears = nog;
        fuel_tank_size = fts;
        cooling_type = ct;
        wheel_type = wt;
    }

    void read()
    {
        dis();
        cout << "No. of cylinders : " << no_of_cylinder << " Cylinders" << endl;
        cout << "No. of gears : " << no_of_gears << " Gears" << endl;
        cout << "Size of fuel tank : " << fuel_tank_size << " Inches" << endl;
        cout << "Type of cooling : " << cooling_type << endl;
        cout << "Type of wheel : " << wheel_type << endl;
    }
};

class TVS : public bike
{
    string make_type;

public:
    TVS() {}

    TVS(int mil, int prc, int noc, int nog, float fts, string ct, string wt, string mt) : bike(mil, prc, noc, nog, fts, ct, wt)
    {
        make_type = mt;
    }

    void read()
    {
        bike::read();
        cout << "Model type = " << make_type << endl;
    }
};

class Bajaj : public bike
{
    string make_type;

public:
    Bajaj() {}

    Bajaj(int mil, int prc, int noc, int nog, float fts, string ct, string wt, string mt) : bike(mil, prc, noc, nog, fts, ct, wt)
    {
        make_type = mt;
    }

    void read()
    {
        bike::read();
        cout << "Model type = " << make_type << endl;
    }
};

int main()
{
    Bajaj b(30, 400000, 2, 4, 4.6, "Liquid", "Alloy", "Standrad");
    TVS t(45, 350000, 2, 3, 3.4, "Liquid", "Spokes", "Standrad");
    Audi a(70, 1250000, 1500000, 4, 6, "Disel", "COUPE");
    Ford f(85, 1656000, 1949000, 6, 5, "Disel", "SEDAN");

    cout << "\n*** Cars : ***";
    cout << "\n**************\n\n";

    cout << "1. Audi details : \n\n";
    a.read();

    cout << "\n2. Ford details : \n\n";
    f.read();

    cout << "\n*** Bikes : ***";
    cout << "\n**************\n\n";

    cout << "1. Bajaj details : \n\n";
    b.read();

    cout << "\n2. TVS details : \n\n";
    t.read();
    cout << endl;

    return 0;
}