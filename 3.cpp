#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class data {
private:
    string model_name, fuel_type, Airbag, transmission;
    float showroom_price, Mileage, tank_capacity;
    int seating;

public:
    void collect_data() {
        cin.ignore();
        cout << "Enter Model name: ";
        getline(cin, model_name);
        cout << "Enter Fuel type: ";
        cin >> fuel_type;
        cout << "Enter SHOWROOM_PRICE: ";
        cin >> showroom_price;
        cout << "Enter Mileage: ";
        cin >> Mileage;
        cout << "Enter Transmission (values can be Manual or AMT): ";
        cin >> transmission;
        cout << "Enter Tank capacity: ";
        cin >> tank_capacity;
        cout << "Enter seating: ";
        cin >> seating;
        cout << "Enter Airbag (values can be Yes or No): ";
        cin >> Airbag;
    }

    void name() {
        cout << model_name << endl;
    }

    void get_details() {
        cout << left << setw(15) << model_name << setw(10) << fuel_type << setw(15) << showroom_price << setw(10) << Mileage << setw(15) << transmission << setw(30) << tank_capacity << setw(10) << seating << setw(10) << Airbag << endl;
    }

    void getmodelname(string model) {

            if(model_name == model) {
                cout << left << setw(15) << model_name << setw(10) << fuel_type << setw(15) << showroom_price << setw(10) << Mileage << setw(15) << transmission << setw(30) << tank_capacity << setw(10) << seating << setw(10) << Airbag << endl;

            }
            
            else
                cout <<"enter valid model name";
        }

    void getFuelType(string fuel) {
    
            if (fuel_type == fuel) {
                cout << left << setw(15) << model_name << setw(10) << fuel_type << setw(15) << showroom_price << setw(10) << Mileage << setw(15) << transmission << setw(30) << tank_capacity << setw(10) << seating << setw(10) << Airbag << endl;
            }
            else {
                cout <<"emter valid option" ;
            }
        }

    
    void getPrice(float max_price) {
    
            if (showroom_price <= max_price) {
                cout << left << setw(15) << model_name << setw(10) << fuel_type << setw(15) << showroom_price << setw(10) << Mileage << setw(15) << transmission << setw(30) << tank_capacity << setw(10) << seating << setw(10) << Airbag << endl;
            }
        }

    };

int main() {
    data car[1000];
    int num, selection,choose;
    float max_price;
    string fuel_type;

    cout << "Enter the number of cars you want to enter: ";
    cin >> num;

    for (int i = 0; i < num; i++) {
        car[i].collect_data();
    }

    cout << "Welcome to Tata Motors!" << endl;
    cout << "Get the car details as per your preference" << endl;
    cout << "(1) Model Name (2) Fuel Type (3) Price Range: ";
    cin >> selection;

    switch (selection) {
        case 1:
            cout << "Available car models:" << endl;
            for (int i = 0; i < num; i++) {
                car[i].name();
            }
            cout << "Choose your car to get details: ";
            cin >> choose;
            cout << left << setw(15) << "Model" << setw(10) << "Fuel" << setw(15) << "Price(Lakhs)" << setw(10) << "Mileage" << setw(15) << "Transmission" << setw(30) << "Tank Capacity(Liters)" << setw(10) << "Seating" << setw(10) << "Airbags" << endl;
            car[choose - 1].get_details();
            break;

        case 2: 
            cout << "Enter fuel type: ";
            cin >> fuel_type;
            cout << "Cars with fuel type '" << fuel_type << "':" << endl;
            cout << left << setw(15) << "Model" << setw(10) << "Fuel" << setw(15) << "Price(Lakhs)" << setw(10) << "Mileage" << setw(15) << "Transmission" << setw(30) << "Tank Capacity(Liters)" << setw(10) << "Seating" << setw(10) << "Airbags" << endl;
            for (int i = 0; i < num; i++) {
                car[i].getFuelType(fuel_type);
            }
            break;

        case 3:
            cout << "Enter maximum price (Lakhs): ";
            cin >> max_price;
            cout << "Cars within price range up to " << max_price << " Lakhs:" << endl;
             cout << left << setw(15) << "Model" << setw(10) << "Fuel" << setw(15) << "Price(Lakhs)" << setw(10) << "Mileage" << setw(15) << "Transmission" << setw(30) << "Tank Capacity(Liters)" << setw(10) << "Seating" << setw(10) << "Airbags" << endl;
            for (int i = 0; i < num; i++) {
                car[i].getPrice(max_price);
            }
            break;

        default:
            cout << "Invalid selection!" << endl;
            break;
    }

    return 0;
}
