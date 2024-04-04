#include <iostream>
#include <string>
using namespace std;
// Клас для представлення поштової адреси організації
class OrganizationAddress {
private:
    string streetAddress;  // Вулиця та номер будинку
    string city;           // Місто
    string postalCode;     // Поштовий індекс
    string country;        // Країна
public:
    // Конструктор класу
    OrganizationAddress(const string& street = "", const string& city = "", const string& postalCode = "", const string& country = "")
        : streetAddress(street), city(city), postalCode(postalCode), country(country) {}
    // Методи для зміни складових частин адреси
    void setStreetAddress(const string& street) { streetAddress = street; }
    void setCity(const string& cityName) { city = cityName; }
    void setPostalCode(const string& postal) { postalCode = postal; }
    void setCountry(const string& countryName) { country = countryName; }
    // Методи для отримання значень складових частин адреси
    string getStreetAddress() const { return streetAddress; }
    string getCity() const { return city; }
    string getPostalCode() const { return postalCode; }
    string getCountry() const { return country; }
    // Метод для виведення адреси
    void displayAddress() const {
        cout << "Street Address: " << streetAddress << endl;
        cout << "City: " << city << endl;
        cout << "Postal Code: " << postalCode << endl;
        cout << "Country: " << country << endl;
    }
    // Деструктор класу
    ~OrganizationAddress() {
        cout << "Organization Address object destroyed." << endl;
    }
};

int main() {
    // Створення об'єкту класу OrganizationAddress
    OrganizationAddress address;

    // Введення даних адреси користувачем
    string street, city, postalCode, country;
    cout << "Enter street address: ";
    getline(cin, street);
    cout << "Enter city: ";
    getline(cin, city);
    cout << "Enter postal code: ";
    getline(cin, postalCode);
    cout << "Enter country: ";
    getline(cin, country);

    // Встановлення введених даних для адреси
    address.setStreetAddress(street);
    address.setCity(city);
    address.setPostalCode(postalCode);
    address.setCountry(country);

    // Виведення адреси
    cout << "\nOrganization Address:\n";
    address.displayAddress();

    // Зміна будь-якої складової частини адреси
    string choice;
    cout << "\nDo you want to change any part of the address? (yes/no): ";
    getline(cin, choice);
    if (choice == "yes") {
        cout << "Enter the name of the part you want to change (street, city, postal code, country): ";
        getline(cin, choice);
        if (choice == "street") {
            cout << "Enter new street address: ";
            getline(cin, street);
            address.setStreetAddress(street);
        } else if (choice == "city") {
            cout << "Enter new city: ";
            getline(cin, city);
            address.setCity(city);
        } else if (choice == "postal code") {
            cout << "Enter new postal code: ";
            getline(cin, postalCode);
            address.setPostalCode(postalCode);
        } else if (choice == "country") {
            cout << "Enter new country: ";
            getline(cin, country);
            address.setCountry(country);
        } else {
            cout << "Invalid choice!" << endl;
        }

        // Виведення оновленої адреси
        cout << "\nUpdated Organization Address:\n";
        address.displayAddress();
    }

    return 0;
}
