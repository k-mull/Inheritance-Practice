#include "Truck.h"
    Truck::Truck(): Truck("Chevy","Silverado", 2000, 20000)
    {

    }
    Truck::Truck(string make, string model, int year, double cargoCapacity){
        setMake(make);
        setModel(model);
        setYear(year);
        this->cargoCapacity=cargoCapacity;
    }
    Truck::Truck(Truck& otherTruck){
        if (this != &otherTruck){
            this->setMake(otherTruck.getMake());
            this->setModel(otherTruck.getMake());
            this->setYear(otherTruck.getYear());
        }
    }
    double Truck::getCargoCapacity(){
        return cargoCapacity;
    }
    void Truck::setCargoCapacity(double cargoCapacity){
        this->cargoCapacity = cargoCapacity;
    }
    Truck& Truck::operator=(Truck& otherTruck){
        if (this != &otherTruck){
            this->setMake(otherTruck.getMake());
            this->setModel(otherTruck.getMake());
            this->setYear(otherTruck.getYear());
        }
        return *this;
    }
    ostream& operator<<(ostream& strm, Truck& Truck){
	strm << "A " << Truck.getYear() << " "
		<< Truck.getMake() << " "
		<< Truck.getModel()
        << "With a cargo capacity of "
        << Truck.getCargoCapacity();
	return strm;
    }