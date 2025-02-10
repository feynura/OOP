/*Name:Kento feynura
Reg No:Bscit-05-0151/2024
Campus:TRC
GitUsername:Feynura*/

#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    string brand;
    string model;
    float price;
    int mileage;
    int updatedmileage;

    int calculateupdatedmileage(int drive) {
    	
    	cout<<"enter drive"<<endl;
    	cin>>drive;
        updatedmileage = mileage + drive;  // Correctly updates mileage
        return updatedmileage;
    }
};

int main() {
    Car c1;

    // Initialize car properties
    c1.brand = "Toyota";
    c1.model = "Corolla";
    c1.price = 20000;
    c1.mileage = 5000;  // Ensure correct initialization

    int drive;  // Setting drive distance explicitly to 500

    // Call function to update mileage
    c1.calculateupdatedmileage(drive);

    // Display car details
    cout << "Brand: " << c1.brand << endl;
    cout << "Model: " << c1.model << endl;
    cout << "Price: $" << c1.price << endl;
    cout << "Initial Mileage: " << c1.mileage << endl;
    cout << "Updated Mileage: " << c1.updatedmileage << endl;

    return 0;
}
