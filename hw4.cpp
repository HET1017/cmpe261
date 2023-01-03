#include <iostream>
using namespace std;
//this program helps the company add a new vehicle to the system

class Rent
{ //company rent a vehicle system
public:
    //vehicle's properties
    //constructors
    string brand;
    int price;
    int km;
    Rent(string brand, int price, int km)
    {
        this->brand = brand;
        this->price = price;
        this->km = km;
    }
    void rent(string, int, int)
    {
        cin >> brand;
        cin >> price;
        cin >> km;
    }

}; //extends Rent class
class Automobile : public Rent
{
public:
    string gear; //oto ,manuel
    Automobile(string brand, int price, int km, string gear) : Rent(brand, price, km)
    { //super
        this->gear = gear;
    }
    void chooseAutomobile()
    {
        cout << "You chose a automobile " << endl;
        string b; //brand
        int p;    //price
        int k;    //km
        string g; //gear type
        cout << "Please enter: Brand, Price, km and Gear type:" << endl;
        cin >> b >> p >> k >> g;
        cout << "Car brand is :" << b << ", price is " << p << ", km is " << k << ", gear type is " << g << endl;
    }
};
class Motorcycle : public Rent
{
public:
    int wheel; //motorcycle's number of wheels because some vehicle has 3-4 wheels
    Motorcycle(string brand, int price, int km, int wheel) : Rent(brand, price, km)
    {
        this->wheel = wheel;
    }
    void chooseMotorcycle()
    {
        cout << "You chose a motorcycle " << endl;
        string b; //brand
        int p;    //price
        int k;    //km
        int w;    //number of wheel
        cout << "Please enter: Brand, Price, km and number of Wheel :" << endl;
        cin >> b >> p >> k >> w;
        cout << "Motorcycle brand is :" << b << ", price is " << p << ", km is " << k << ", motorcycle has " << w << " wheels." << endl;
    }
};
class Yacht : public Rent
{
public:
    int length;
    Yacht(string brand, int price, int km, int length) : Rent(brand, price, km)
    {
        this->length = length;
    }
    void chooseYacht()
    {
        cout << "You chose a yacht " << endl;
        string b; //brand
        int p;    //price
        int mil;  //mil
        int l;    //length of yacht
        cout << "Please enter: Brand, Price, mil and yacht length:" << endl;
        cin >> b >> p >> mil >> l;
        cout << "Yacht brand is :" << b << ", price is " << p << ", mil is " << mil << ", yacht length is " << l << "meters." << endl;
    }
};
void Add()
{ //input from user
    int in;
    cout << "Welcome to Tandogan Rent Filo" << endl;
    cout << "Please choose a vehicle: " << endl;
    cout << "1-Automobile" << endl;
    cout << "2-Motorcycle" << endl;
    cout << "3-Yacht" << endl;
    cout << "Please choose a vehicle: ";
    cin >> in;
    if (in == 1)
    {
        Automobile a = Automobile("Audi", 950000, 12650, "triptronic"); //example
        a.chooseAutomobile();
    }
    else if (in == 2)
    {
        Motorcycle m = Motorcycle("Yamaha", 86500, 17000, 3); //example
        m.chooseMotorcycle();
    }
    else if (in == 3)
    {
        Yacht y = Yacht("Octopus", 958000, 3000, 45); //example
        y.chooseYacht();
    }
    else
    {
        cout << "Invalid choice..." << endl;
        cout << "Restart the system..." << endl;
    }
}

int main()
{
    
    Add();
}
